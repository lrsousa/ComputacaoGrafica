#pragma once
#include "Objeto.h"
#include <vector>

class Bola : public Objeto
{
	point ponto;
	float vx, vy;
public:
	Bola();
	Bola(point ponto);
	~Bola();
	void draw();
};

