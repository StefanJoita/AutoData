#pragma once 
#include "net_common.h"

namespace olc
{
	namespace net
	{
		template<typename T>
		class tsqueue
		{
		public:
			tsqueue() = default;
			tsqueue(const tsqueue<T>&) = delete;
			virtual ~tsqueue() { clear(); }
		public:
			//Return and maintains item at front of Queue
			const T& front()
			{
				std::scoped_lock lock(muxQueue);
				return deqQueue.front();
			}
			//returns and maintains item at the back of the queue
			const T& back()
			{
				std::scoped_lock lock(muxQueue);
				return deqQueue.back();
			}
			//adds an item to back of  the queue
			void push_back(const T& item)
			{
				std::scoped_lock lock(maxQueue);
				deqQueue.emplace_back(std::move(item));
			}
			//adds item to the front of queue
			void push_front(const T& item)
			{
				std::scoped_lock lock(muxQueue);
				deqQueue.emplace_front(std::move(item));
			}
			
			//return true if queue has no items
			bool empty()
			{
				std::scoped_lock lock(muxQueue);
				return deqQueue.empty();
			}

			//return number of items in queue
			size_t count()
			{
				std::scoped_lock lock(muxQueue);
				return deqQueue.size();
			}

			//clears queue
			void clear()
			{
				std::scoped_lock lock(muxQueue);
				return deqQueue.clear();
			}

			//Remove and return item from front of queue
			T pop_front()
			{
				std::scoped_lock(muxQueue);
				auto t = std::move(deqQueue.front());
				deqQueue.pop_front();
				return t;
			}

			//removes and return item from the back of the queue
			T pop_back()
			{
				std::scoped_lock lock(muxQueue);
				auto t = std::move(deqQueue.back());
				deqQueue.pop_back();
				return t;
			}

		protected:
			std::mutex muxQueue;
			std::deque<T> deqQueue;

		};
	}
}