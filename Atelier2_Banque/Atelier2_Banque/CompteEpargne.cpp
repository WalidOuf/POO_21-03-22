#include "CompteEpargne.h"
#include <assert.h>

using namespace Banque;

CompteEpargne::CompteEpargne(Client* c, Devise* s, double taux) : Compte(c, s)
{
	assert(taux > 0 && taux < 100);
	this->tauxInteret = taux;
}

void CompteEpargne::calculInteret()
{
	this->deposerArgent(&(this->Compte::calculInteret(this->tauxInteret)));
}

bool Banque::CompteEpargne::retirerArgent(Devise* montant)
{
	if (this->checkSolde(montant))
		return this->Compte::retirerArgent(montant);
	return false;
}

Banque::CompteEpargne::~CompteEpargne()
{
}
