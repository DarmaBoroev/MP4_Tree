#pragma once
#include <iostream>
#include "Stack.h"

using MyStack::Stack;

namespace MyProg
{
	class MyTree
	{
		struct Node
		{
			int val;
			Node *son;
			Node *brother;
			Node() : son(0), brother(0)
			{
			};
		};
		Node *root;

	public:
		MyTree()
		{
			root = NULL;
		};
		~MyTree()
		{
			Delete(root);
		}

		void Add(const int &elem)
		{
			Add(root, elem);
		}

		void Show()
		{
			Show(root);
		}

		void CountElem(const int &x)
		{
			CountElem(root, x);
		}

	private:
		void Add(Node *&node, const int &x)
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
				cout << node->val;
				Show(node->brother);
				Show(node->son);

			}
		}

		void CountElem(Node *&node, const int &x)
		{
			Stack <Node*> St;
			int N = 0;
			if (node == NULL)
			{
				throw string("Пустое дерево!");
			};

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
			cout << "Число вхождений элемента Е в дерево Т = " << N;
		}
	};
}