#include "Box.h"

Box::Box()
{	
	int ma_x = -9999;
	int ma_y = -9999;
	int me_x = 9999;
	int me_y = 9999;

	srand(time(0));
	for (int i = 0; i < 50; i++) {
		pontos.push_back(point(rand() %250 -125, rand() % 250 -125));
	}
	
}


Box::~Box()
{
}

void Box::draw() {
	glPointSize(5);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	for (int i = 0; i < 50; i++) {
		if (ma_x < pontos[i].x) ma_x = pontos[i].x;
		if (ma_y < pontos[i].y) ma_y = pontos[i].y;
		if (me_x > pontos[i].x) me_x = pontos[i].x;
		if (me_y > pontos[i].y) me_y = pontos[i].y;

		glVertex2d(pontos[i].x / 300.0, pontos[i].y / 300.0);
	}

	Line *l1 = new Line(ma_x, ma_y, me_x, ma_y, 0, 1, 0);
	Line *l2 = new Line(me_x, ma_y, me_x, me_y, 0, 1, 0);
	Line *l3 = new Line(ma_x, ma_y, ma_x, me_y, 0, 1, 0);
	Line *l4 = new Line(me_x, me_y, ma_x, me_y, 0, 1, 0);
	
	glEnd();
}

