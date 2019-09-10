#pragma once

#include "TreeNode.h"
#include <iostream>

class BinarySearchTree
{
	friend class TransferWindowManager;
private:
	TreeNode * m_root;

public:
	BinarySearchTree() { m_root = NULL; }
	BinarySearchTree(SoccerPlayerData& data);
	~BinarySearchTree();

	void insert(SoccerPlayerData& data);
	void deletion(int ability); // ability = key

	friend std::ostream& operator<<(std::ostream& os, const BinarySearchTree& tree) {

	// fill in your code to print in-order traversal of a binary search tree
		return os;
	}
};
