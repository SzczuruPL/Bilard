#pragma once
#include <iostream>
class Board
{
private:
	int width;
	int height;
	int cof;
public:
	Board(int width,int height,int cof);
	void print();
};

