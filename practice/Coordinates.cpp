#include "stdafx.h"
#include "Coordinates.h"


Coordinates::Coordinates(int temp_x,int temp_y)
{
	x = temp_x;
	y = temp_y;
}

int Coordinates::getXCoordinate() {
	return x;
}

int Coordinates::getYCordinate() {
	return y;
}


Coordinates::~Coordinates()
{
}
