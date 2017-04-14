#include "Bola.h"

Bola::Bola(point p) : vx(0.08), vy(0.012)
{
	this->ponto.x= p.x;
	this->ponto.y = p.y;
}

Bola::Bola()
{
}

Bola::~Bola() {
}

void Bola::draw() {
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2d(this->ponto.x / 300.0, this->ponto.y/ 300.0);
	glEnd();

	ponto.x += vx;
	ponto.y += vy;

	if (ponto.x > 300 || ponto.x < -300) {
		if (rand() % 2 == 0) vx *= -1;
	}

	if (ponto.y > 300 || ponto.y < -300) {
		if (rand() % 2 == 0) vy *= -1;
	}


}
