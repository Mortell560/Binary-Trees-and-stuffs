#include "Node.hpp"
#include <iostream>
#define COUNT 10

namespace Tree {
	void Node::showTreeVertical(Node* root, int space) {
		if (root == NULL) { return; }

		space += COUNT;

	};

	void Node::showTreeHorizontal(Node* root, int space) {
		if (root == NULL) { return; }

		space += COUNT;

		Node::showTreeHorizontal(root->right, space);

		std::cout << '\n';
		for (int i = COUNT; i < space; i++) {
			std::cout << " ";
		}
		std::cout << root->data << '\n';

		Node::showTreeHorizontal(root->left, space);
	};

}