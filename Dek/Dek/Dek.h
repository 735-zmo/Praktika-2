#pragma once
namespace MyProg
{
	template <class T>
	class Dek
	{
	private:
		struct deq
		{
			T val;
			deq *right, *left;
		};
		deq* head;
		deq* tail;
	public:
		
		Dek() :head(0), tail(0)
		{
		}

		~Dek()
		{
			while (tail)
			{
				head = tail->right;
				delete tail;
				tail = head;
			};
		};
		void insertR(T x)
		{
			deq *tmp1 = new deq;
			tmp1->val = x;
			if (head == 0)
			{
				head = tmp1;
				tail = tmp1;
			}
			else
			{
				head->right = tmp1;
				tmp1->left = head;
				head = tmp1;
				head->right = 0;
			}
		}
		void insertL(T x)
		{
			deq *tmp = new deq;
			tmp->val = x;
			if (tail == 0)
			{
				head = tmp;
				tail = tmp;
			}
			else
			{
				tail->left = tmp;
				tmp->right = tail;
				tail = tmp;
				tail->left = 0;
			}
		}

		void showR()
		{
			if (empty())
			{
				throw string("Дек пуст!");
			}

			else
			{
				deq *el = head;
				while (el != tail->left)
				{
					cout << el->val << " ";
					el = el->left;
				}
			}
		}

		void showL()
		{
			
			if (empty())
			{
				throw string("Дек пуст!");
			}
			else 
			{
				deq *el1;
				el1 = tail;
				while (el1 != head->right)
				{
					cout << el1->val << " ";
					el1 = el1->right;
				}
			}
		}

		void delR()
		{
			if (empty())
			{
				throw string("Дек пуст!");
			}

			deq* delB = head;
			head = head->left;
			delete delB;
		}

		void delL()
		{
			if (empty())
			{
				throw string("Дек пуст!");
			}

			deq* delZ = tail;
			tail = tail->right;
			delete delZ;
		}

		bool empty() const
		{
			return head == 0 && tail ==0;
		}

	};
}