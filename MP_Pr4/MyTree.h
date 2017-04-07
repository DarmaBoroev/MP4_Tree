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

		void Add(const T &elem)
		{
			Add(root, elem);
		}

		void Show()
		{
			Show(root);
		}

		void CountElem(const T &x)
		{
			CountElem(root, x);
		}

	private:
		void Add(Node *&node, const T &elem);
		void Delete(Node *node);
		void Show(Node *&node);
		void CountElem(Node *&node,const T &x);
	};

	template <class T>
	void MyTree<T>::CountElem(Node *&node, T &x)
	{
		Stack St;
		int count = 0;
		if (node == NULL);
		do
		{
			if (node->val == x) count++;
			if (node->son != NULL)
			{
				St.push(node->son)
			}
			if (node->brother != NULL)
			{
				St.push(node->brother);
			}
		} while (St.pop());
	}

	template <class T>
	void MyTree<T>::Delete(Node *&node)
	{
		if (node)
		{
			Delete(node->son);
			Delete(node->brother);
			delete node;
		}
	}

	template <class T>
	void MyTree <T>::Add(Node *&node, const T &x)
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

	template <class T>
	void MyTree <T>::Show(Node *&node)
	{
		if (node != NULL)
		{
			cout << node->val;
			Show(node->brother);
			Show(node->son);
			
		}
	}
}
