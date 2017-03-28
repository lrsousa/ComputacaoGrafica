#pragma once
#include "Object.h"
#include "GL\glew.h"
#include "GL\freeglut.h"

class Line : public Object
{
	void bresenham(int x1, int y1, int x2, int y2);
	float xb;
	float yb;
public:
	Line(int x1, int y1, int x2, int y2);
	Line(int x1, int y1, int x2, int y2, int r, int g, int b);
	~Line();	
	void draw();
};