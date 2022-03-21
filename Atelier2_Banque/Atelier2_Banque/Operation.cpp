#include "Operation.h"
int cpt = 0;

Banque::Operation::Operation(string lib, Devise* montant)
{
	cpt++;
	this->libelle = lib;
	this->montant = montant;
}

void Banque::Operation::afficher() const
{
	cout << "Operation : " << this->numOperation << "|";
	this->montant->afficher();
	cout << endl;
}
