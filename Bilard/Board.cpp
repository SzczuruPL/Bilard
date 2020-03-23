#include "Board.h"


Board::Board(int width, int height, int cof, int diameter, int mass, int cue_mass)
{
	this->width=width;
	this->height=height;
	this->cof=cof;
	this->r=diameter/2;
	this->mass = mass;
	this->cue_mass = cue_mass;
}

void Board::setBalls()
{
	Ball* ball = new Ball(r, 0, cue_mass, this);
	ball->setInitialCueCoordinates(this);
	int k = 1;
	for (int i = 0;i <= 4;i++) //TODO: bile ustawiaja sie wedlug numerow, trzeba to rozwiazac
	{
		for (int j = 0; j <= i; j++)
		{
		Ball* ball = new Ball(r, k, mass, this); //TODO: ustawienie 8 (zamiana z 7) i rozne w rogach i losowo
		k++;
		ball->setInitialCoordinates(i,j,this);
		balls.push_back(ball);
		}
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
	std::cout << width << ' ' << height << ' ' << cof << ' ' << r << std::endl;
}
