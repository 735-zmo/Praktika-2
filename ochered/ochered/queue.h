#pragma once
namespace MyProg
{
	template <class T>
	class Queue
	{
	private:
		struct Node
		{
			Node() :next(0), val(0)
			{
			}
			Node* next;
			T val;
		};
		Node* head;
		Node* tail;
	public:
		Queue() :head(0), tail(0)
		{
		}
	
		~Queue()
		{
			while (head)
			{
				tail = head->next;
				delete head;
				head = tail;
			}
		}

		void insert(T x)
		{
			Node* tmp = new Node;
			tmp->val = x;
			if (head == 0)
			{
				head = tmp;
				tail = tmp;	
			}
			tail->next = tmp;
			tail = tmp;
		}

		void del()
		{
			if (empty())
			{
				throw string("Очередь пуста!");
			}

			Node* delElem = head;
			head = head->next;
			delete delElem;
		}

		void print()
		{
			if (empty())
			{
				throw string("Очередь пуста!");
			}
			cout << "Текущее состояние очереди: ";
			Node *el = head;
			while (el != 0)
			{
				cout << el->val << " ";
				el = el->next;
			}

		}

		bool empty() const
		{
			return head == 0;
		}

	};
}
