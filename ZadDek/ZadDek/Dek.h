#pragma once
#include <string>
#include <vector>
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
				head =tail->right;
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

			deq *el;
			el = head;
			while (el != tail->left)
			{
				cout << el->val << " ";
				el = el->left;
			}
		}

		void showL()
		{
			if (empty())
			{
				throw string("Дек пуст!");
			}

			deq *el1;
			el1 = tail;
			while (el1 != head->right)
			{
				cout << el1->val << " ";
				el1 = el1->right;
			}
		}

		void shifr()
		{
			setlocale(LC_ALL, "Rus");
			deq *el1;
			el1 = tail;
			const int N = 25;
			string buff;
			char buffT[N];
			ifstream fin;
			fin.open("Text.txt");
			getline(fin, buff);
			fin.close();
			cout << "Исходный текст: " << buff << endl;
			
			for (int i = 0; i <N; ++i)
			{
				buffT[i] = el1->val;
				el1 = el1->right;
			}

			for (int j = 0; j < buff.size(); ++j)
			{
				if (buff[j] == buffT[0])
				{
					buff[j] = buffT[N-2];
				} 
				else if (buff[j] == buffT[1])
				{
					buff[j] = buffT[N-1];
				} else 
					for (int k = 2; k < N; ++k)
					{
						if (buff[j] == buffT[k])
						{
						buff[j] = buffT[k - 2];
						}
				    }
			};
			cout <<"Зашифрованный текст: "<< buff << endl;

		}

		void delR()
		{
			if (empty())
			{
				throw string("Дек пуст!");
			}

			deq* delH = head;
			head = head->left;
			delete delH;
		}

		void delL()
		{
			if (empty())
			{
				throw string("Дек пуст!");
			}

			deq* delT = tail;
			tail = tail->right;
			delete delT;
		}

		bool empty() const
		{
			return head == 0 && tail == 0;
		}
	};
}

