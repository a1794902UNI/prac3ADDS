#include "Player.h"

Player::Player(){

}

char Player::makeMove(){
	move='S';
	return move;
}

void Player::reset(){
	tracker=0;
}