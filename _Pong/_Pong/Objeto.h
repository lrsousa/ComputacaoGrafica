#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include <iostream>
using namespace std;

struct point
{
	float x;
	float y;
	point() {}
	point(float x_, float y_)
	{
		x = x_;
		y = y_;
	}
};
class Objeto
{
protected:
	float x;
	float y;
public:
	float r;
	float g;
	float b;
	Objeto();
	~Objeto();
	virtual void draw() = 0;
};

