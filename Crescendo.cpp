#include "Crescendo.h"

Crescendo::Crescendo(){
	tracker=0;
}

char Crescendo::makeMove(){
	if((tracker%3)==0){
		move='P';
	}
	else if((tracker%3)==1){
		move='S';
	}
	else{
		move='R';
	}
	tracker++;
	return move;
}