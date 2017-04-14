#pragma once
#include "Object.h"
#include "Line.h"

class Player : public Object
{
private:
	int p;
	int x1, y1, x2, y2;
	int velocidade;
	void setaPosicaoInicial();

public:
	Player();
	Player(int p);
	~Player();
	void draw();
	void teclado(unsigned char c, int x, int y);
};

