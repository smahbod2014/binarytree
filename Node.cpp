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
}

Node::~Node() {
	delete left;
	delete right;
}

void
Node::setData(int data) {
	this->data = data;
}

int
Node::getSum() {
	int sumLeft = left == nullptr ? 0 : left->getSum();
	int sumRight = right == nullptr ? 0 : right->getSum();
	return data + sumLeft + sumRight;
}

