#pragma once
#include "Object.h"
#include <stdio.h>
#include "GL\glew.h"
#include "GL\freeglut.h"


class Circle : public Object
{
	void bresenhamCircle(int raio, int center_c, int center_y);
	float raio, xc, yc;
public:
	Circle(int raio, int center_x, int center_y);
	~Circle();
	void draw();
};


