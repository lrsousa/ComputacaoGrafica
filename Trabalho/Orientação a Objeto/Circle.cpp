#include "Circle.h"
#include "Line.h"


Circle::Circle(int raio, int lados, int r, int g, int b)
{
	this->raio = raio;
	this->lados = lados;
	this->r = r;
	this->g = g;
	this->b = b;
}

Circle::Circle(int raio, int lados)
{
	this->raio = raio;
	this->lados = lados;
}

Circle::~Circle()
{
}

void Circle::desenhaCircle(int raio, int lados)
{
	float x1 = (raio * cos(0 * (3.14 / 180)));
	float y1 = (raio * sin(0 * (3.14 / 180)));

	for (int i = 0; i < 360; i += (360 / lados))
	{
		float x2 = (raio * cos(i * (3.14 / 180)));
		float y2 = (raio * sin(i * (3.14 / 180)));
		Line *line = new Line(x1, y1, x2, y2, r, g, b);
		x1 = x2;
		y1 = y2;

	}
}


void Circle::draw()
{
	glScalef(Sx, Sy, Sz);
	glPointSize(5);
	glRotatef(angulo, Rx, Ry, Rz);
	glTranslatef(Tx, Ty, Tz);
	glColor3f(r, g, b);
	glBegin(GL_LINE);
	desenhaCircle(raio, lados);
	glEnd();

}