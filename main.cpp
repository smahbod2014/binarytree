/*
 * main.cpp
 *
 *  Created on: Nov 12, 2014
 *      Author: Sean
 */
#include <cstdio>
#include "Node.h"

int main() {
	Node *n7 = new Node(nullptr, nullptr, 7);
	Node *n6 = new Node(nullptr, nullptr, 6);
	Node *n5 = new Node(nullptr, nullptr, 5);
	Node *n4 = new Node(nullptr, nullptr, 4);
	Node *n3 = new Node(n6, n7, 3);
	Node *n2 = new Node(n4, n5, 2);
	Node *n1;
	n1 = new Node(n2, n3, 1);
	n4->setData(54);
	printf("Sum is %d\n", n1->getSum());
	delete n1;
	return 0;
}


