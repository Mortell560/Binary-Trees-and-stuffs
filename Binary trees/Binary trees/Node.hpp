#pragma once

template<typename T>
class Node
{
public:
	T data;
	Node* left, * right;

	Node(T data) {
		this->data = data;
		this->left = 0;
		this->right = 0;
	}
};

