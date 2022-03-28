#include "CompteCourant.h"

Banque::CompteCourant::CompteCourant(Client* prop, Devise* m, Devise* d): Compte(prop,m)
{
	this->decouvert = d;
}

bool Banque::CompteCourant::retirerArgent(Devise* montant)
{
	if (this->checkDevouvert(montant, this->decouvert))
		return this->Compte::retirerArgent(montant);
	return false;
}
