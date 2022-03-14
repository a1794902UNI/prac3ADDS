#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"


class Crescendo: public Computer{
private:
	int tracker;
public:
	Crescendo();
	char makeMove();
};

#endif