#include "Lados.h"


Lados::Lados(int raio, int lados)
{
	this->raio = raio;
	this->lados = lados;
}

Lados::~Lados()
{
}

void Lados::desenhaCircle(int raio, int lados)
{	
	
	for (int i = 0; i < 360; i += (360 / lados))
	{
		glVertex2d((raio * cos(i*(3.14 / 180))) /300.0, (raio * sin(i*(3.14 / 180))) / 300.0);
	}
}


void Lados::draw()
{	
		glScalef(Sx, Sy, Sz);
		glRotatef(angulo, Rx, Ry, Rz);
		glTranslatef(Tx, Ty, Tz);
		glColor3f(r, g, b);
		glBegin(GL_LINE_LOOP);
		desenhaCircle(raio, lados);
		glEnd();
		
	}
