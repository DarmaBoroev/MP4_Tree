//#pragma once
//#include <iostream>
//using namespace std;
//
//namespace MyProg
//{
//
//	class Tree
//	{
//	private:
//		struct Node
//		{
//			int val;
//			Node *R, *L;
//		};
//		Node *root = NULL;
//	public:
//		Tree()
//		{};
//		~Tree(){};
//
//		void add(int x)
//		{
//			if (root == NULL)
//			{
//				root = new Node;
//				root->val = x;
//				root->L = root->R = NULL;
//			}
//
//			if (x < root->val)
//			{
//				if (root->L != NULL)
//				{
//					root = root->L;
//					add(x);
//				}
//				else
//				{
//					root->L = new Node;
//					root->L->val = x;
//					root->L->L = root->L->R = NULL;
//				}
//			}
//
//			if (x > root->val)
//			{
//				if (root->R != NULL)
//				{
//					root = root->R;
//					add(x);
//				}
//				else
//				{
//					root->R = new Node;
//					root->R->val = x;
//					root->R->L = root->R->R = NULL;
//				}
//			}
//		}
//
//		void del()
//		{
//			while (root != NULL)
//			{
//				Node *tmp = root;
//				delete tmp;
//			}
//		}
//
//		void show()
//		{
//			if (root != NULL)
//			{
//				cout << root->val;
//
//			}
//		}
//	};
//}
