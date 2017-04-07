#pragma once

namespace MyStack
{
	template<class T>
	class Stack
	{
	private:
		struct Node
		{
			Node() :val(0), next(0)
			{
			}
			Node* next;
			T val;
		};
		Node* head;
		Node* tail;

	public:
		Stack() :tail(0), head(0)
		{
		}

		~Stack()
		{
			while (tail)
			{
				head = tail->next;
				delete tail;
				tail = head;
			}
		}

		void push(T x)
		{
			Node* tmp = new Node;
			tmp->val = x;
			if (tail == 0)
			{
				tail = tmp;
			}
			else
			{
				tmp->next = tail;
				tail = tmp;
			}
		}

		void pop()
		{
			if (tail == 0)
			{
				throw string("���� ����!");
			}
			T tmp = tail->val;
			Node* delptr = tail;
			tail = tail->next;
			delete delptr;
			return tmp;
		}

		void print()
		{
			if (tail == 0)
			{
				throw string("���� ����!");
			}
			cout << "������� ��������� �����: ";
			Node *el = tail;
			while (el != 0)
			{
				cout << el->val << " ";
				el = el->next;
			}

			cout << '\n';
		}
	};
}
