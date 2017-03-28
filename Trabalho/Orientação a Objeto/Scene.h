#pragma once
#include <vector>
#include "Object.h"
#include <string>
#include "GL\glew.h"
#include "GL\freeglut.h"


using namespace std;

class Scene
{
private:
	static vector<Object*> objs;

public:
	Scene(int argc, char **argv, string titulo = "Sem Titulo", int w = 300, int h = 300);
	~Scene();
	void inicio(void);
	static void desenhaCena(void);
	static void addObject(Object *o);
};

