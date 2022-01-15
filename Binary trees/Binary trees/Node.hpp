#pragma once

using namespace std;

namespace Tree {
	class Node
	{
	public:
		//Data (int here bc other types are uninteresting for now except std::string maybe)
		int data;
		//Pointer to the left node
		Node* left{ 0 };
		//Pointer to the right node
		Node* right{ 0 };

		Node(int data) {
			this->data = data;
		}

		static void showTreeHorizontal(Node* root, int space = 0);
		static void showTreeVertical(Node* root, int space = 0);
		static bool lookFor(Node* root, const int val);
		static int size(Node* root);
	};
}

