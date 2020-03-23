#include "Board.h"

Board::Board(int width, int height, int cof, int diameter)
{
	this->width=width;
	this->height=height;
	this->cof=cof;
	this->r=diameter/2;
}

void Board::setBalls()
{
	for (int i = 0;i < 16;i++)
	{
		Ball* ball = new Ball(r, i);
		ball->setInitialCoordinates(,board);
		balls.push_back(ball);
	}
}

int Board::getWidth()
{
	return width;
}

int Board::getHeight()
{
	return height;
}

void Board::print()
{
	std::cout << width << ' ' << height << ' ' << cof << std::endl;
}
