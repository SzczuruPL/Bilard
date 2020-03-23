#include "Game.h"
#include <fstream>


Game::Game()
{
	readConf();
	board = new Board(config["width"], config["height"], config["cof"], config["diameter"]);
	intervalTime = config["intervalTime"];
}

void Game::start()
{

}

void Game::readConf()
{
	std::ifstream fin;
	fin.open("C:\\Users\\Arkadiusz\\Source\\Repos\\Bilard\\Bilard\\config.cfg");
	if (!fin.good())
	{
		std::cout << "Unable to open config file!" << std::endl;
		return;
	}
	while (!fin.eof())
	{
		std::string confKey;
		std::string confCom; //no use - commentary
		fin >> confKey;
		fin >> config[confKey] >> confCom;
	}
}

