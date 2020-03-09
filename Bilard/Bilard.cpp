#include <cstdlib>
#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
	Game bilard;
	bilard.read_conf();
	bilard.start();
	return 0;
}