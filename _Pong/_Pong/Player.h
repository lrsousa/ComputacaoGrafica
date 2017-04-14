#pragma once
#include "Objeto.h"
#include "GL\glew.h"
#include "GL\freeglut.h"
#include <stdio.h>
#include <conio.h>

class Player : public Objeto
{	
	point p1;
	point p2;
	float vx;

public:
	int x1, x2, y;
	Player();
	Player(point p1, point p2, int r, int g, int b);
	~Player();
	void draw();
};
