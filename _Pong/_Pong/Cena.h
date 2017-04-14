#pragma once
#include <vector>
#include "Objeto.h"
#include <string>
using namespace std;

class Cena
{
private:
	static vector<Objeto*> objs;
public:
	Cena(int argc, char **argv, string titulo = "Pong", int w = 300, int h = 300);
	~Cena();
	void inicio(void);
	static void desenhaCena(void);
	static void addObjeto(Objeto *o);
	void teclado(unsigned char c, int x, int y);
};

