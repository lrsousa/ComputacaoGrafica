#include "GL\glew.h"
#include "GL\freeglut.h"

void cena() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 0, 0);
	glVertex2d(-0.25, 0.3);
	glVertex2d(-0.25, 0.23);
	glVertex2d(0.01, 0.27);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 0, 0);
	glVertex2d(0.03, 0.29); //D
	glVertex2d(0.03, 0.18); //E
	glVertex2d(0.07, 0.18); //G
	glVertex2d(0.07, 0.29); //F
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 0, 0);
	glVertex2d(0.08, 0.27);
	glVertex2d(0.36, 0.3);
	glVertex2d(0.36, 0.23);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 0, 0);
	glVertex2d(0.3, 0.1); //K
	glVertex2d(0.3, -0.05); //L
	glVertex2d(-0.07, -0.05); //N
	glVertex2d(-0.07, 0.18); //M
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 0, 0);
	glVertex2d(-0.09, 0.14); //O
	glVertex2d(-0.09,-0.02); //P
	glVertex2d(-0.38, 0.14); //Q
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 0, 0);
	glVertex2d(-0.43, 0.17); //R
	glVertex2d(-0.4, 0.14); //S
	glVertex2d(-0.43, 0.06); //T
	glVertex2d(-0.52, 0.06); //U
	glVertex2d(-0.56, 0.14); //V
	glVertex2d(-0.52, 0.17); //X
	glEnd();
	glutSwapBuffers();

}

void inicio() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

int main(int argc, char **argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutCreateWindow("Minha janela");
	glutDisplayFunc(cena);
	inicio();

	glutMainLoop();

	return 0;

}