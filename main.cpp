#include <iostream>
#include <array>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"

using namespace std;
int main(int argc,char **argv)
 {
    array<Player *, 8> competitors;

    Player* P1=new Avalanche();
    competitors[0]=P1;
    Player* P2=new Avalanche();
    competitors[1]=P2;
    Player* P3=new Avalanche();
    competitors[2]=P3;
    Player* P4=new Avalanche();
    competitors[3]=P4;
    Player* P5=new Avalanche();
    competitors[4]=P5;
    Player* P6=new Avalanche();
    competitors[5]=P6;
    Player* P7=new Avalanche();
    competitors[6]=P7;
    Player* P8=new Avalanche();
    competitors[7]=P8;

    Tournament Tourney;
    Tourney.run(competitors);

    

    return 0;

}
