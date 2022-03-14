#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Computer.h"

class FistfullODollars: public Computer{
private:
	int tracker;
public:
	FistfullODollars();
	char makeMove();
};
#endif