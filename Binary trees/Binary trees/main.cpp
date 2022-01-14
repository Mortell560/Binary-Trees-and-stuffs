#include <string>
#include <iostream>
#include "Node.hpp"

int main(int argv, char** args) {
	auto* node = new Tree::Node(4);
	node->right = new Tree::Node(8);
	node->right->right = new Tree::Node(9);
	node->right->left = new Tree::Node(3);
	node->left = new Tree::Node(6);
	node->left->right = new Tree::Node(93);
	node->left->left = new Tree::Node(65);
	Tree::Node::showTreeHorizontal(node);
	return 0;
}