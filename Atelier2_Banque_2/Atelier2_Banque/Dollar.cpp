#include "Dollar.h"

Banque::Dollar::Dollar()
{
}

Banque::Dollar::Dollar(double val):Devise(val)
{
	this->symbole = "Dollar";
}
