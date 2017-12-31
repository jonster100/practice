#pragma once
class Coordinates
{
public:
	Coordinates() = default;
	Coordinates(int tempX,int tempY);
	int getXCoordinate();
	int getYCoordinate();
	~Coordinates();
private:
	int x;
	int y;
};

