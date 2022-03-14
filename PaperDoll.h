#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"


class PaperDoll: public Computer{
private:
	int tracker;
public:
	PaperDoll();
	char makeMove();
};

#endif