#include "PaperDoll.h"

PaperDoll::PaperDoll(){
	tracker=0;
}

char PaperDoll::makeMove(){
	if((tracker%3)==0){
		move='P';
	}
	else if((tracker%3)==1){
		move='S';
	}
	else{
		move='S';
	}
	tracker++;
	return move;
}