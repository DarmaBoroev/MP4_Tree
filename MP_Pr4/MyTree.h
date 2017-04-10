#pragma once
#include <iostream>
#include "Stack.h"

using MyStack::Stack;

namespace MyProg
{
	template <class T>
	class MyTree
	{
		struct Node
		{
			T val;
			Node *son;
			Node *brother;
			Node() : son(0), brother(0) {};
		};
		Node *root;

	public:
		MyTree()
		{
			root = NULL;
		};

		~MyTree()
		{
			/*Delete(root);*/
		}

		void Add()
		{
			T x;
			cout << "\t������� �������� ��������: ";
			if (!(cin >> x))
			{
				throw string("������������ ���� ������!\n");
			}
			else Add(root, x);
		}

		void Show()
		{
			if (root == NULL)
			{
				cout << "������ ������! �������� �������� � ������!";
			}
			else
			{
				cout << "\t�������� ������: ";
				Show(root);
			}
		}

		void CountElem()
		{
			T E =0;
			Node* root1 = root;
			if (root == NULL)
			{
				cout << "������ ������! �������� �������� � ������!\n";
			}
			else
			{
				cout << "\t������� ������� �: ";
				if (!(cin >> E))
				{
					throw string("������������ ���� ������!\n");
				}
				else
				{
					CountElem(root, E);
					root = root1;
				}
			}
		}

		void Delete()
		{
			Delete(root);
			cout << "������ �������!\n";
			root = NULL;
		}

	private:
		void Add(Node *&node, const T &x)
		{
			if (node == NULL)
			{
				node = new Node;
				node->val = x;
			}
			else if (x < node->val)
			{
				Add(node->son, x);
			}
			else
			{
				Add(node->brother, x);
			}
		}

		void Delete(Node *node)
		{
			if (node)
			{
				Delete(node->son);
				Delete(node->brother);
				delete node;
			}
		}

		void Show(Node *&node)
		{
			if (node != NULL)
			{
				cout << node->val << " ";
				Show(node->brother);
				Show(node->son);
			}
		}

		void CountElem(Node *&node, const T &x)
		{
			Stack <Node*> St;
			int N = 0;
			do
			{
				if (x == node->val) N++;
				if (node->son != NULL)
				{
					St.push(node->son);
				}
				if (node->brother != NULL)
				{
					St.push(node->brother);
				}
			} while (node = St.pop());
			if (N == 0) cout << "������ �������� � ������ ���!\n";
			else cout << "\t����� ��������� �������� � � ������ � = " << N <<endl;
		}
	};
}