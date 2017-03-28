#include <iostream>
#include "Scene.h"
#include "Line.h"
#include "Circle.h"
#include "Lados.h"

int main(int argc, char **argv)
{	
	Line l1(-300, 300, 300, -300);
	Line l2(300, 300, -300, -300, 1, 0, 1);
		
	//Circle c1(100, 0, 0);	
	//Circle c2(150, 0, 0);
	
	//Lados c3(50, 60);
	
	Scene cena(argc, argv, "Janela Padrão", 600, 600);
	
	return 0;

}