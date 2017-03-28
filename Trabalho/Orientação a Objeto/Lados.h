#pragma once
#include "Object.h"
#include <stdio.h>
#include "GL\glew.h"
#include "GL\freeglut.h"
#include <cmath>


class Lados : public Object
{
	void desenhaCircle(int raio, int lados);
	int raio, lados;
public:
	Lados(int raio, int lados);
	~Lados();
	void draw();
};



