#include "Ball.h"
#include "Game.h"

Ball::Ball(int r, int number)
{

}

Color Ball::getColor()
{
	return;
}

Type Ball::getType()
{
	return;
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
