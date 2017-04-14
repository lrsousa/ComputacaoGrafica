#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Player.h"
#define VK_W 0x57
#define VK_Q 0x51



Player::Player()
{
}

Player::Player(int p)
{
	this->p = p;
	this->velocidade = 10;
	setaPosicaoInicial();
}

Player::~Player()
{
}

void Player::setaPosicaoInicial()
{
	this->x1 = 50;
	this->x2 = -50;
	if (this->p == 1) {
		this->y1 = 249;
		this->y2 = 249;
	} else if(this->p == 2) {
		this->y1 = -249;
		this->y2 = -249;
	}
}

void Player::draw()
{
	if (this->p == 1) {
		Line *l1 = new Line(this->x1, this->y1, this->x2, this->y2, 1, 1, 0);
	}
	else if (this->p == 2) {
		Line *l1 = new Line(this->x1, this->y1, this->x2, this->y2, 1, 0, 1);
	}
}

void Player::teclado()
{
	if (GetAsyncKeyState(VK_W)) {
		puts("W");
		this->x1 -= velocidade;
		this->x2 += velocidade;
	}
	if (GetAsyncKeyState(VK_Q)) {
		puts("Q");
		this->x1 += velocidade;
		this->x2 -= velocidade;
	}
	

	if (GetAsyncKeyState(VK_RIGHT)) {
		puts("DIREITA");
		this->x1 -= velocidade;
		this->x2 += velocidade;
	}
	if (GetAsyncKeyState(VK_LEFT)) {
		puts("ESQUERDA");
		this->x1 += velocidade;
		this->x2 -= velocidade;
	}
}
