#pragma once
#include <iostream>
#include <vector>
#include "Ball.h"
class Board
{
private:
	int width;
	int height;
	int cof;
	int r;
	std::vector <Ball*> balls;
public:
	Board(int width,int height,int cof, int diameter);
	void setBalls();
	int getWidth();
	int getHeight();
	void print();
};

