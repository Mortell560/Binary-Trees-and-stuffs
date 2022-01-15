#include "Node.hpp"
#include <iostream>
#include <iomanip>

#define COUNT 10

namespace Tree {

	//!\brief shows a binary tree vertically (approx as of rn)
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
	}

	//!\brief shows a binary tree horizontally (up = right side)
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
	}

	//!\brief unoptimized tree search since it's for general binary trees
	bool Node::lookFor(Node* root, const int val) {
		if (root == NULL) { return false; }
		if (root->data == val) { return true; }

		bool x = Node::lookFor(root->left, val);
		if (x) { return true; }

		return Node::lookFor(root->right, val);
	}

	//!\brief returns the size of a given tree
	int Node::size(Node* root) {
		if (root == NULL) { return 0; }
		return Node::size(root->right) + Node::size(root->left) + 1;
	}

}