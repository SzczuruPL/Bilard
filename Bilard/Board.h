#pragma once
#include <iostream>
class Board
{
private:
	int guiWidth;
	int guiHeight;
	int cof;
public:
	Board(int guiWidth,int guiHeight,int cof);
	void print();
};

