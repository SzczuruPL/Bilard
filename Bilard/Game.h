#pragma once
#include <iostream>
#include <map>
#include "Player.h"
#include "Board.h"
class Game
{
private:
	Board *board;
	Player player1;
	Player player2;
	int intervalTime; //ms TODO: ->plik konfiguracyjny
	std::map < std::string, int> config;
public:
	Game();
	void start();
	void read_conf();
};

