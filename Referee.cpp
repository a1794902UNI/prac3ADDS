#include "Referee.h"

using namespace std;

Referee::Referee(){

}

char Referee::refGame(Human player1, Computer player2){
p1m=player1.makeMove();
	p2m=player2.makeMove();

	switch(p1m){
		case 'R':
			if (p2m==('R')){
				Outcome='T';
			}
			else if (p2m==('P')){
				Outcome='L';
			}
			else{
				Outcome='W';
			}
			break;
		case 'P':
			if (p2m==('R')){
				Outcome='W';
			}
			else if (p2m==('P')){
				Outcome='T';
			}
			else{
				Outcome='L';
			}
			break;		
		case 'S':
			if (p2m==('R')){
				Outcome='L';
			}
			else if (p2m==('P')){
				Outcome='W';
			}
			else{
				Outcome='T';
			}
			break;
	}
	return Outcome;
}

