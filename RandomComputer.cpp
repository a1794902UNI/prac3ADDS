#include "RandomComputer.h"
#include <cstdlib>
#include <time.h>
RandomComputer::RandomComputer(){

}

char RandomComputer::makeMove(){
	srand(time(0));
	int randsel=rand()%3;
	if(randsel==0){
		move='R';
	}
	else if(randsel==1){
		move='P';
	}
	else{
		move='S';
	}
	return move;
}