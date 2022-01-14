#include "Node.hpp"
#include <iostream>
#include <iomanip>

#define COUNT 10

namespace Tree {

	void Node::showTreeVertical(Node* root, int indent)
	{
		if (root != NULL) {
			if (root->left) Node::showTreeVertical(root->left, indent + 4);
			if (root->right) Node::showTreeVertical(root->right, indent + 4);
			if (indent) {
				std::cout << std::setw(indent) << ' ';
			}
			cout << root->data << "\n ";
		}
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