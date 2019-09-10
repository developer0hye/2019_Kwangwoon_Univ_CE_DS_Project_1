#pragma once

#include <string>
#include <iostream>
class SoccerPlayerData
{
	friend class TreeNode;
	friend class BinarySearchTree;
	friend class TransferWindowManager;
private:
	std::string m_name;
	std::string m_position;

	int m_transfer_fee;
	int m_ability;

public:
	SoccerPlayerData() { }
	SoccerPlayerData(std::string name, std::string position, int transfer_fee, int ability)
		:
		m_name(name),
		m_position(position),
		m_transfer_fee(transfer_fee),
		m_ability(ability)
	{
	}

	friend std::ostream& operator<<(std::ostream& os, const SoccerPlayerData& node) {
		os << "(node.m_name: " << node.m_name << "), "
			<< "(node.m_position: " << node.m_position << "), "
			<< "(node.m_transfer_fee: " << node.m_transfer_fee << "), "
			<< "(node.m_ability: " << node.m_ability << ")";
		return os;
	}
};
