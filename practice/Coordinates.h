#pragma once
class Coordinates
{
public:
	Coordinates() = default;
	Coordinates(int temp_x,int temp_y);
	int getXCoordinate();
	int getYCordinate();
	~Coordinates();
private:
	int x;
	int y;
};

