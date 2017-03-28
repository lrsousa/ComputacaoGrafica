#include "Circle.h"


Circle::Circle(int raio, int center_x, int center_y)
{
	this->raio = raio;
	this->xc = center_x;
	this->yc = center_y;
}

Circle::~Circle()
{
}


void Circle::bresenhamCircle(int raio, int xc, int yc)
{
	int x = 0, y = raio;
	float pk = (5.0 / 4.0) - raio;

	glVertex2d((xc + x) / 300.0, (yc + y) / 300.0);
	glVertex2d((xc + x) / 300.0, (yc - y) / 300.0);
	glVertex2d((xc + y) / 300.0, (yc + x) / 300.0);
	glVertex2d((xc + y) / 300.0, (yc - x) / 300.0);
	glVertex2d((xc - x) / 300.0, (yc - y) / 300.0);
	glVertex2d((xc - y) / 300.0, (yc - x) / 300.0);
	glVertex2d((xc - x) / 300.0, (yc + y) / 300.0);
	glVertex2d((xc - y) / 300.0, (yc + x) / 300.0);


	int k;

	while (x < y)
	{
		x = x + 1;
		if (pk < 0)
			pk = pk + 2 * x + 1;
		else
		{
			y = y - 1;
			pk = pk + 2 * (x - y) + 1;
		}

		glVertex2d((xc + x) / 300.0, (yc + y) / 300.0);
		glVertex2d((xc + x) / 300.0, (yc - y) / 300.0);
		glVertex2d((xc + y) / 300.0, (yc + x) / 300.0);
		glVertex2d((xc + y) / 300.0, (yc - x) / 300.0);
		glVertex2d((xc - x) / 300.0, (yc - y) / 300.0);
		glVertex2d((xc - y) / 300.0, (yc - x) / 300.0);
		glVertex2d((xc - x) / 300.0, (yc + y) / 300.0);
		glVertex2d((xc - y) / 300.0, (yc + x) / 300.0);

	}

}


void Circle::draw()
{
	glScalef(Sx, Sy, Sz);
	glRotatef(angulo, Rx, Ry, Rz);
	glTranslatef(Tx, Ty, Tz);
	glColor3f(r, g, b);
	glBegin(GL_POINTS);
	bresenhamCircle(raio, xc, yc);
	glEnd();
}
