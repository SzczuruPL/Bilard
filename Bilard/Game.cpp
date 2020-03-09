#include "Game.h"
#include <fstream>


Game::Game()
{
	read_conf();
	board = new Board(config["width"], config["height"], config["cof"]);
}

void Game::start()
{

}

void Game::read_conf()
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
		std::string conf_key;
		std::string conf_com; //no use - commentary
		fin >> conf_key;
		fin >> config[conf_key] >> conf_com;
	}
}

