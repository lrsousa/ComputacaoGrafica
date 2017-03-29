#pragma once
#include "Object.h"
#include <stdio.h>
#include <cmath>


class Circle : public Object
{
	void desenhaCircle(int raio, int lados);
	int raio, lados;
public:
	Circle(int raio, int lados, int r, int g, int b);
	Circle(int raio, int lados);
	~Circle();

	void draw();
};

