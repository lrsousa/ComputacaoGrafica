#include <iostream>
#include "Scene.h"
#include "Line.h"
#include "Circle.h"
#include "Box.h"

int main(int argc, char **argv)
{	
	//Line l1(300, 300, -300, -300, 0, 0, 0);
		
	//Circle c1(100, 200, 0, 1, 0);	
	//Circle c2(150, 0, 0);

	Box box;


	
	Scene cena(argc, argv, "Janela Padrão", 600, 600);
	
	return 0;

}