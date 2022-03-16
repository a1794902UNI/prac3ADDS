#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:


protected:
	char move;
	int tracker;
public:
	Player();
	virtual char makeMove();
	void reset();



};

#endif
