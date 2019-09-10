#include "TransferWindowManager.h"

TransferWindowManager::SoccerTeam::SoccerTeam()
{
	//You don't need to edit this function.
}

TransferWindowManager::SoccerTeam::SoccerTeam(SoccerPlayerData fw, SoccerPlayerData mf, SoccerPlayerData df, SoccerPlayerData gk)
{
	this->fw = fw;
	this->mf = mf;
	this->df = df;
	this->gk = gk;

	this->sum_transfer_fee = fw.m_transfer_fee + mf.m_transfer_fee + df.m_transfer_fee + gk.m_transfer_fee;
	this->sum_ability = fw.m_ability + mf.m_ability + df.m_ability + gk.m_ability;
}

std::ostream& operator<<(std::ostream& os, const TransferWindowManager::SoccerTeam& team)
{
	os << team.fw << std::endl;
	os << team.mf << std::endl;
	os << team.df << std::endl;
	os << team.gk << std::endl;

	os << "sum_transfer_fee " << team.sum_transfer_fee << std::endl;
	os << "sum_ability " << team.sum_ability << std::endl;

	return os;
}


TransferWindowManager::TransferWindowManager(std::string file_dir, int budget)
{
	m_budget = budget;

	std::ifstream in(file_dir);
	std::string line;

	while (std::getline(in, line))
	{
	//Fill in the code to initialize 4 Binary Search Trees(fw, mf, df, gk)

	}
}

std::ostream& operator<<(std::ostream& os, const TransferWindowManager& manager)
{
	std::cout << "********Forward List********" << std::endl;
	std::cout << manager.fwBST;
	std::cout << "****************************" << std::endl;

	std::cout << "********Midflder List********" << std::endl;
	std::cout << manager.mfBST;
	std::cout << "*****************************" << std::endl;

	std::cout << "********Defender List********" << std::endl;
	std::cout << manager.dfBST;
	std::cout << "*****************************" << std::endl;

	std::cout << "********Goalkeeper List********" << std::endl;
	std::cout << manager.gkBST;
	std::cout << "*******************************" << std::endl;

	return os;
}

void TransferWindowManager::removePlayer(SoccerPlayerData data)
{
	if (data.m_position == "Forward")
		fwBST.deletion(data.m_ability);
	else if (data.m_position == "Midfielder")
		mfBST.deletion(data.m_ability);
	else if (data.m_position == "Defender")
		dfBST.deletion(data.m_ability);
	else //if (data.m_position == "Goalkeeper"
		gkBST.deletion(data.m_ability);
}

TransferWindowManager::SoccerTeam TransferWindowManager::getBestTeam()
{
	SoccerTeam best_team;
	
	//Fill in the code to search the best_team from 4 BSTs
	//The datas for best team must be stored in the variable best_team.
	//*best team means the most powerful team that is defined in the project introduction file. 
	

	fwBST.deletion(best_team.fw.m_ability);
	mfBST.deletion(best_team.mf.m_ability);
	dfBST.deletion(best_team.df.m_ability);
	gkBST.deletion(best_team.gk.m_ability);

	return best_team;
}
