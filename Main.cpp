#include <iostream>

#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;
int main(int argc,char **argv)
 {
Human P1;
Computer P2;

Referee ref;

char win=ref.refGame(P1,P2);

cout <<win<< endl;

return 0;
}