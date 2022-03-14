#include <iostream>
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
using namespace std;
int main(int argc,char **argv)
 {
Player* P1=new FistfullODollars();
Player* P2=new Crescendo();

Referee ref;

for(int i=0; i<4; i++){
    char win=ref.refGame(P1,P2);
    cout <<win<< endl;

}

return 0;
}
