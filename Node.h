/*
 * Node.h
 *
 *  Created on: Nov 12, 2014
 *      Author: Sean
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node(Node *left, Node *right, int data);

	virtual ~Node();

	int getSum();

private:
	Node *left;
	Node *right;
	int data;
};

#endif /* NODE_H_ */
