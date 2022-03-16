#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <array>
#include "Player.h"


class Tournament{
private:
	Player* GrandWinner;
public:
	Tournament();
	Player * run(std::array<Player *, 8> competitors);
	Player* Round(Player* comp1, Player* comp2);

};

#endif