#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Cena.h"
#include "Bola.h"
#include "Player.h"
#include <stdio.h>
#include <conio.h>


int p1x1, p1x2, p1y;
int p2x1, p2x2, p2y;

int bx, by;

int velocidade;

void init(void)
{
	p1x1 = -75; p1x2 = 75; p1y = 199;
	p2x1 = -75; p2x2 = 75; p2y = -199;

	bx = 0;
	by = 0;
	
	velocidade = 1;

	glClearColor(1.0, 1.0, 1.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
}

//void jogo()
//{
//	//Player Vermelho
//	if (bolax >= p1x && bolax <= p1x + largura) {
//		if (bolay >= p1y && bolay <= p1y + altura) {
//			valocidadeY = valocidadeY*-1;
//		}
//	}
//	else {
//		if (bolax >= p1x && bolax <= p1x + largura) {
//			if (bolay + bola >= p1y && bolay + bola <= p1y + altura) {
//				valocidadeY = valocidadeY*-1;
//			}
//		}
//		else {
//			if (bolax + bola >= p1x && bolax + bola <= p1x + largura) {
//				if (bolay >= p1y && bolay <= p1y + altura) {
//					valocidadeY = valocidadeY*-1;
//				}
//			}
//			else {
//				if (bolax + bola >= p1x && bolax + bola <= p1x + largura) {
//					if (bolay + bola >= p1y && bolay + bola <= p1y + altura) {
//						valocidadeY = valocidadeY*-1;
//					}
//				}
//			}
//		}
//	}
//
//	//Player Azul
//	if (bolax >= p2x && bolax <= p2x + largura) {
//		if (bolay >= p2y && bolay <= p2y + altura) {
//			valocidadeY = valocidadeY*-1;
//		}
//	}
//	else {
//		if (bolax >= p2x && bolax <= p2x + largura) {
//			if (bolay + bola >= p2y && bolay + bola <= p2y + altura) {
//				valocidadeY = valocidadeY*-1;
//			}
//		}
//		else {
//			if (bolax + bola >= p2x && bolax + bola <= p2x + largura) {
//				if (bolay >= p2y && bolay <= p2y + altura) {
//					valocidadeX = valocidadeX*-1;
//				}
//			}
//			else {
//				if (bolax + bola >= p2x && bolax + bola <= p2x + largura) {
//					if (bolay + bola >= p2y && bolay + bola <= p2y + altura) {
//						valocidadeX = valocidadeX*-1;
//					}
//				}
//			}
//		}
//	}
//
//	//Reverter ao bater na laterais
//	if (bolax + largura > 7.8f) {
//		valocidadeX = valocidadeX*-1;
//	}
//
//	if (bolax < -5.0f) {
//		valocidadeX = valocidadeX*-1;
//	}
//
//	glutPostRedisplay();
//
//}


//void display() {
//
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	// Vermelho
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glBegin(GL_POLYGON);
//	{
//		glVertex2f(p1x, p1y + altura);
//		glVertex2f(p1x, p1y);
//		glVertex2f(p1x + largura, p1y);
//		glVertex2f(p1x + largura, p1y + altura);
//
//	}
//	glEnd();
//
//	// Azul
//	glColor3f(0.0f, 0.0f, 1.0f);
//	glBegin(GL_POLYGON);
//	{
//		glVertex2f(p2x, p2y + altura);
//		glVertex2f(p2x, p2y);
//		glVertex2f(p2x + largura, p2y);
//		glVertex2f(p2x + largura, p2y + altura);
//
//	}
//	glEnd();
//
//	glColor3f(0.0, 1.0, 0.0);
//
//	//Desenha bolinha
//	glBegin(GL_POLYGON);
//	{
//
//		glVertex2f(bolax, bolay);
//		glVertex2f(bolax + bola, bolay);
//		glVertex2f(bolax + bola, bolay + bola);
//		glVertex2f(bolax, bolay + bola);
//	}
//	glEnd();
//
//	bolax += valocidadeX;
//	bolay += valocidadeY;
//
//	glFlush();
//
//	glutPostRedisplay();
//}

int main(int argc, char** argv)
{
	init();
	Player p1(point(-75, 240), point(75, 240), 0, 1, 0);
	Player p2(point(-75, -240), point(75, -240), 1, 0, 0);
	Bola b(point(0,0));
	Cena cena(argc, argv, "Pong", 400, 500);


	//glutIdleFunc(jogo);
	//glutKeyboardFunc(teclado);
	/*glutDisplayFunc(display);*/

	glutMainLoop();
	return 0;
}