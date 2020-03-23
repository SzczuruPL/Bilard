#pragma once
#include <iostream>
#include <vector>
#include "Ball.h"
class Ball;
class Board
{
private:
	int width;
	int height;
	int cof;
	int r;
	int mass;
	int cue_mass;
	std::vector <Ball*> balls;
public:
	Board(int width,int height,int cof, int diameter, int mass, int cue_mass);
	void setBalls();
	int getWidth();
	int getHeight();
	void print();
};

