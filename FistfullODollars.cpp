#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
	tracker=0;
}

char FistfullODollars::makeMove(){
	if((tracker%3)==0){
		move='R';
	}
	else if((tracker%3)==1){
		move='P';
	}
	else{
		move='P';
	}
	tracker++;
	return move;
}
