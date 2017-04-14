#include "Target.h"

Target::Target()
{
}


Target::~Target()
{
}

void Target::draw()
{
	glPointSize(10);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2d(50 / 300.0, 50 / 300.0);
	glEnd();
}
