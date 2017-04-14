#include "Cena.h"
#include "Player.h"

Cena::Cena(int argc, char **argv, string titulo, int w, int h)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(w, h);
	glutCreateWindow(titulo.c_str());
	/*glutKeyboardFunc(teclado);*/
	glutInitWindowPosition(100, 100);
	glutDisplayFunc(desenhaCena);
	glutIdleFunc(desenhaCena);
	inicio();
	glutMainLoop();
}

Cena::~Cena()
{
}

void Cena::inicio() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void Cena::desenhaCena()
{
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < objs.size(); i++)
	{
		glColor3f(objs[i]->r, objs[i]->g, objs[i]->b);
		objs[i]->draw();
	}
	glutSwapBuffers();
}


void Cena::addObjeto(Objeto *o)
{
	objs.push_back(o);
}

vector<Objeto*>Cena::objs;

void Cena::teclado(unsigned char c, int x, int y) {
	glutSwapBuffers();
	
	//Movimento dos "jogadores"
	switch (c)
	{
	case 'a':
		Player pla = (Player) objs[0];
		if ( > -5)
		{
			p1x -= 0.5f;
		}
		break;
	case 'd':
		if (p1x < 2)
		{
			p1x += 0.5f;
		}
		break;

	case 'j':
		if (p2x > -5)
		{
			p2x -= 0.5f;
		}
		break;

	case 'l':
		if (p2x < 2)
		{
			p2x += 0.5f;
		}
		break;
	}
}