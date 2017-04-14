#include "Scene.h"

Scene::Scene(int argc, char **argv, string titulo, int w, int h)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(w, h);

	glutCreateWindow(titulo.c_str());
	glutDisplayFunc(desenhaCena);
	inicio();

	glutMainLoop();
}

Scene::~Scene()
{
}

void Scene::inicio() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void Scene::desenhaCena()
{
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < objs.size(); i++)
	{
		objs[i]->draw();
	}
	glutSwapBuffers();
}


void Scene::addObject(Object *o)
{
	objs.push_back(o);
}

vector<Object*>Scene::objs;