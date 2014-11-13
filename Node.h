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

	int calculateHeight();

	void setData(int data);

	void clearData();

	int getSum();

private:
	Node *left;
	Node *right;
	int data;
	int height;
};

#endif /* NODE_H_ */
