#include "Player.h"


Player::Player()
{
}


Player::Player(point p1, point p2, int r, int g, int b)
{
	this->p1 = p1;
	this->p2 = p2;
	this->r = r;
	this->g = g;
	this->b = b;
}


Player::~Player()
{
}

void Player::draw() {
	glLineWidth(10.0);
	glColor3f(r, g, b);
	glBegin(GL_LINES);
	glVertex2f(this->p1.x / 300.0, this->p1.y / 300.0);
	glVertex2f(this->p2.x / 300.0, this->p2.y / 300.0);
	glEnd();
}