#include "Board.h"

Board::Board(int guiWidth, int guiHeight, int cof)
{
	this->guiWidth=guiWidth;
	this->guiHeight=guiHeight;
	this->cof=cof;
}

void Board::print()
{
	std::cout << guiWidth << ' ' << guiHeight << ' ' << cof << std::endl;
}
