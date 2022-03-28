#include "CompteEpargne.h"
#include <assert.h>

using namespace Banque;

Banque::CompteEpargne::CompteEpargne()
{
	this->tauxInteret = 0;
}

CompteEpargne::CompteEpargne(Client* c, Devise* s, double taux) : Compte(c, s)
{
	assert(taux > 0 && taux < 100);
	this->tauxInteret = taux;
}

void CompteEpargne::calculInteret()
{
	Devise de = this->Compte::calculInteret(this->tauxInteret);
	this->Compte::deposerArgent(&de);
}

bool Banque::CompteEpargne::retirerArgent(Devise* montant)
{
	CompteEpargne ce;
	if (this->checkSolde(montant)) {
		if (typeid(*this) == typeid(ce))
			return this->Compte::retirerArgent(montant);
		return true;
	}
	return false;
}

Banque::CompteEpargne::~CompteEpargne()
{
}
