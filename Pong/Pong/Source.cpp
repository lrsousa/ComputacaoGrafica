#include <iostream>
#include "Line.h"
#include "Player.h"
#include "Target.h"
#include "Scene.h"

int main(int argc, char **argv)
{
	
	Line lateralEsquerda(-250, 250, -250, -250, 0, 0, 0);
	Line lateralDireita(250, 250, 250, -250, 0, 0, 0);
	Target t;
	Player *p1 = new Player(1);
	Player *p2 = new Player(2);

	Scene cena(argc, argv, "Pong", 800, 800);

	return 0;

}