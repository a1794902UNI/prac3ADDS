#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"

using namespace std;
int main(int argc,char **argv)
 {
Player* P1=new Computer();
Player* P2=new Avalanche();

Referee ref;

char win=ref.refGame(P1,P2);

cout <<win<< endl;

return 0;
}