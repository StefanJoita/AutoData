#pragma once

#include "net_common.h"
#include "net_tsqueue.h"
#include "net_message.h"
#include "net_connection.h"

namespace olc
{
	namespace net
	{
		template <typename T>
		class client_interface
		{
			client_interface() : m_socket(m_context)
			{
				//Initialize the socket with the io context, so it can do stuff
			}

			virtual ~client_interface()
			{
				//If the client is destroyed, always try and disconnect from server
				Disconnect();
			}

				
			public:
					//Connect to server with hostname/ip-addres and port
					bool Connect(const std::string & host, const uint16_t port)
					{
						try 
						{
							//Create a connection
							m_connection = std::make_unique<connection<T>>();//TO DO

							//Rezolve hostname/ip-address into tangiable physical adress
							asio::ip::tcp::resolver rezolver(m_context);
							m_endpoints = rezolver.resolve(host, std::to_string(port));

							//Tell the connection object to connect to server
							m_connection->ConnectToServer(m_endpoints);
						    
							//Start the Context Thread
							m_connection = std::thread([this]() {m_context.run(); });
						
						
						}
						catch (std::exception& e)
						{
							std::cerr << "Client Exception:" << e.what() << "\n";
							return false;
						}
					}
					//Disconnect from the server
					void Disconnect()
					{
						//If the connection exists, and it s connected then...
						if (IsConnected())
						{
							//...Disconnect from the server 
							m_connection->Disconnect();
						}
						//Either way, we're also done with the asio context...
						m_context.stop();
						//...and its thread
						if (thrContext.joinable())
							thrContext.join();

						//Destroy the connection object
						m_connection.release();
					}
					//Check if the client is actually connected to a server
					bool IsConnected()
					{
						if (m_connection)
							return m_connection->IsConnected();
						else 
							return false;
					}

					//Retrieve queue of messages from the server
					tsqueue<owned_message<T>>& Incoming()
					{
						return m_qMessagesIn;
					}
			protected:
					//asio context handles the data transfer
					asio::io_context m_context;
					// ..but needs a thread of its own to execute its work commands
					std::thread thrContext;
					//This is the hardware socket that is connected to the server
					asio::ip::tcp::socket m_socket;
					//the client has a single instance of a "connection" object, which handles data transfer
					std::unique_ptr<connection<T>> m_connection;
			private:
					//this is the thread safe queue of incoming messages from the server
					tsqueue<owned_messages<T>> m_qMessagesIn;
		};
			

	}
	
}