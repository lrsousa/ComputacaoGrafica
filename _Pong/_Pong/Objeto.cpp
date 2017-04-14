#include "Objeto.h"
#include "Cena.h"


Objeto::Objeto() : r(0), g(0), b(0)
{
	Cena::addObjeto(this);
}


Objeto::~Objeto()
{
}
