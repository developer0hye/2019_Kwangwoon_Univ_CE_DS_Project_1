#pragma once

#include "BinarySearchTree.h"

#include <iostream>
#include <string>

class TransferWindowManager
{
private:
	int m_budget;

	BinarySearchTree fwBST;
	BinarySearchTree mfBST;
	BinarySearchTree dfBST;
	BinarySearchTree gkBST;

public:

	struct SoccerTeam
	{
		SoccerPlayerData fw;
		SoccerPlayerData mf;
		SoccerPlayerData df;
		SoccerPlayerData gk;

		int sum_transfer_fee;
		int sum_ability;

		SoccerTeam();
		SoccerTeam(SoccerPlayerData fw, SoccerPlayerData mf, SoccerPlayerData df, SoccerPlayerData gk);
		friend std::ostream& operator<<(std::ostream& os, const SoccerTeam& team);
	};

	TransferWindowManager(std::string file_dir, int budget);
	
	friend std::ostream& operator<<(std::ostream& os, const TransferWindowManager& manager);

	SoccerTeam getBestTeam();
};

