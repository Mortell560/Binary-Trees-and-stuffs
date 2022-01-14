#pragma once

using namespace std;

namespace Tree {
	class Node
	{
	public:
		int data;
		Node* left{ 0 };
		Node* right{ 0 };

		Node(int data) {
			this->data = data;
		}

		static void showTreeHorizontal(Node* root, int space = 0);
		static void showTreeVertical(Node* root, int space = 0);
	};
}

