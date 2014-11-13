/*
 * Node.cpp
 *
 *  Created on: Nov 12, 2014
 *      Author: Sean
 */

#include <cstdio>
#include "Node.h"

Node::Node(Node *left, Node *right, int data) {
	this->left = left;
	this->right = right;
	this->data = data;
	this->height = calculateHeight();
}

Node::~Node() {
	delete left;
	delete right;
}

int
Node::calculateHeight() {
	int leftHeight = 0;
	int rightHeight = 0;

	if (left != nullptr) {
		leftHeight = 1 + left->calculateHeight();
	}

	if (right != nullptr) {
		rightHeight = 1 + right->calculateHeight();
	}

	return leftHeight < rightHeight ? rightHeight : leftHeight;
}

void
Node::setData(int data) {
	this->data = data;
}

void
Node::clearData() {
	this->data = 0;
}

int
Node::getSum() {
	int sumLeft = left == nullptr ? 0 : left->getSum();
	int sumRight = right == nullptr ? 0 : right->getSum();
	return data + sumLeft + sumRight;
}

