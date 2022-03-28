#include "ComptePayantEpargne.h"

Banque::ComptePayantEpargne::ComptePayantEpargne(Client* cl, Devise* s, double taux)
	:ComptePayant(cl,s), CompteEpargne(cl,s,taux),Compte(cl,s)
{
}

bool Banque::ComptePayantEpargne::retirerArgent(Devise* montant)
{
	if(this->CompteEpargne::retirerArgent(montant))
		return this->ComptePayant::retirerArgent(montant);
	return false;
}
