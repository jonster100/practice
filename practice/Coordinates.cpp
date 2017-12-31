#include "stdafx.h"
#include "Coordinates.h"


Coordinates::Coordinates(int tempX,int tempY)
{
	x = tempX;
	y = tempY;
}

int Coordinates::getXCoordinate() {
	return x;
}

int Coordinates::getYCoordinate() {
	return y;
}


Coordinates::~Coordinates()
{
}
