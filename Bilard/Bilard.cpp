#include <cstdlib>
#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
	Game bilard;
	bilard.readConf();
	bilard.start();
	return 0;
}