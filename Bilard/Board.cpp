#include "Board.h"

Board::Board(int width, int height, int cof)
{
	this->width=width;
	this->height=height;
	this->cof=cof;
}

void Board::print()
{
	std::cout << width << ' ' << height << ' ' << cof << std::endl;
}
