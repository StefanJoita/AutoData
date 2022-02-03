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
		class server_interface
		{
		public: 
			server_interface(uint16_t port)
			{

			}
			
			virtual ~server_interface()
			{

			}
			
			bool Start()
			{

			}

			void Stop()
			{

			}

			//ASYNC - Instruct asio to wait for connection
			void WaitForClientConnection()
			{

			}

			//Send a message to a specific client
			void MessageClient(std::shared_ptr<connection<T>> client, const message<T>& msg)
			{

			}
			//Send a message to all clients
			void MessageAllClients(const message<T>& msg, std::shared_ptr<connection<T>> pIgnoreClient=nullptr)
		};
	}
}