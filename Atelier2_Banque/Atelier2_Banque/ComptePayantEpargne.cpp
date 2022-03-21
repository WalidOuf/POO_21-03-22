#include "ComptePayantEpargne.h"

Banque::ComptePayantEpargne::ComptePayantEpargne(Client* cl, Devise* s, double taux)
	:ComptePayant(cl,s), CompteEpargne(cl,s,taux)
{
}

bool Banque::ComptePayantEpargne::retirerArgent(Devise* montant)
{
	Devise res = *montant + *montant * 0.05;
	if (this->checkSolde(&res))
		return this->Compte::retirerArgent(&res);
	return false;
}
