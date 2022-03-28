#include "Euro.h"

Banque::Euro::Euro()
{
}

Banque::Euro::Euro(double val):Devise(val)
{
	this->symbole = "Euro";
}
