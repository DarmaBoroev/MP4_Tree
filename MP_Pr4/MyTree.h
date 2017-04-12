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
			Node *child;
			Node *br;
			Node() : child(NULL), br(NULL) {};
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
			else
			{
				if (x < node->val)
				{
					Add(node->child, x);
				}
				else
				{
					Add(node->br, x);
				}
			}
		}

		void Delete(Node *node)
		{
			if (node)
			{
				Delete(node->child);
				Delete(node->br);
				delete node;
			}
		}

		void Show(Node *&node)
		{
			if (node != NULL)
			{
				cout << node->val << " ";
				Show(node->br);
				Show(node->child);
			}
		}

		void CountElem(Node *&node, const T &x)
		{
			Stack <Node*> St;
			int N = 0;
			do
			{
				if (x == node->val) N++;
				if (node->child != NULL)
				{
					St.push(node->child);
				}
				if (node->br != NULL)
				{
					St.push(node->br);
				}
			} while (node = St.pop());
			if (N == 0) cout << "������ �������� � ������ ���!\n";
			else cout << "\t����� ��������� �������� � � ������ � = " << N <<endl;
		}
	};
}