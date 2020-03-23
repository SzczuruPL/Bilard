#include "Ball.h"
#include "Game.h"

Ball::Ball(int r, int number)
{

}

Color Ball::getColor()
{
	return (number<9)?(Color)number:(Color)(number-9);
}

Type Ball::getType()
{
	return (Type)(number/9);
}

int Ball::getRadius()
{
	return r;
}

int Ball::getX()
{
	return x;
}

int Ball::getY()
{
	return y;
}

int Ball::getNumber()
{
	return 0;
}

int Ball::getSpeed()
{
	return 0;
}

int Ball::getAngle()
{
	return 0;
}

bool Ball::isTouchingEdge()
{
	return false;
}

bool Ball::isTouchingAnotherBall()
{
	return false;
}

void Ball::move()
{
}

void Ball::setInitialCoordinates(int i, int j,Board *board)
{
	int d = 2 * r;
	x = i * sqrt(3) / 2 * d + 3. / 4. * board->getWidth();
	y = i * d / 2. - d * j + board->getHeight() / 2.;
}

void Ball::getGUICoordinateX(int width)
{
}

void Ball::getGUICoordinateY(int weight)
{
}

bool Ball::isMoving()
{
	return false;
}

void Ball::recountPosition()
{
}

void Ball::recountVelocity()
{
}

void Ball::recountAngle()
{
}

bool Ball::isOnBoard()
{
	return false;
}

bool Ball::isWhite()
{
	return false;
}

bool Ball::isBlack()
{
	return false;
}

bool Ball::isSolid()
{
	return false;
}

bool Ball::isStriped()
{
	return false;
}
