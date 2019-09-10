#pragma once

#include "SoccerPlayerData.h"
#include <iostream>

class TreeNode
{
	friend class BinarySearchTree;
	friend class TransferWindowManager;
private:
	SoccerPlayerData m_data;
	TreeNode* m_left;
	TreeNode* m_right;
public:
	TreeNode() :m_left(NULL), m_right(NULL) {}
	~TreeNode() { }
	TreeNode(SoccerPlayerData & data, TreeNode* left = NULL, TreeNode* right = NULL)
	{
		this->m_data = data;
		this->m_left = left;
		this->m_right = right;
	}

	friend std::ostream& operator<<(std::ostream& os, const TreeNode* node)
	{
		// fill in your code to print in-order traversal of a binary search tree
		return os;
	}
};
