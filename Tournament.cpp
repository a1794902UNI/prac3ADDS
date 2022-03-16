#include "Tournament.h"
#include "Referee.h"
using namespace std;
Tournament::Tournament(){

}


Player* Tournament::Round(Player* comp1, Player* comp2){
	Referee ref;
	int W=0;
	int L=0;
	int T=0;
	for(int i=0; i<5; i++){

		char result=ref.refGame(comp1, comp2);
		if (result=='W'){
			W++;
		}
		else if(result=='L'){
			L++;
		}
		else{
			T++;
		}
	}

	comp1->reset();
	comp2->reset();

	if(W>=L){
		return comp1;
	}
	else{
		return comp2;
	}

}


Player* Tournament::run(array<Player*, 8> competitors){

Player* Winner12=Round(competitors[0], competitors[1]);
Player* Winner34=Round(competitors[2], competitors[3]);
Player* Winner56=Round(competitors[4], competitors[5]);
Player* Winner78=Round(competitors[6], competitors[7]);

Player* Semi1Win=Round(Winner12, Winner34);
Player* Semi2Win=Round(Winner56, Winner78);

Player*GrandWinner=Round(Semi1Win, Semi2Win);

return GrandWinner;

}



