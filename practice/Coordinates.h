#pragma once
class Coordinates
{
public:
	Coordinates() = default;
	Coordinates(int tempX,int tempY);
	int getXCoordinate();
	int getYCordinate();
	~Coordinates();
private:
	int x;
	int y;
};

