#include "Compte.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include "ComptePayantEpargne.h"

using namespace Banque;
using namespace std;

int main()
{
	Client* cl1 = new Client("Compte", "Epargne", "Casa");
	Client* cl2 = new Client("Compte", "Payant", "Casa");
	Client* cl3 = new Client("Compte", "EpargnePayant", "Casa");

	Devise* solde1 = new Devise(1000);
	Devise* solde2 = new Devise(1000);
	Devise* solde3 = new Devise(1000);

	CompteEpargne* ce = new CompteEpargne(cl1, solde1, 0.05);
	ComptePayant* cp = new ComptePayant(cl2, solde2);
	ComptePayantEpargne* cpe = new ComptePayantEpargne(cl3, solde3, 0.05);

	Devise* retirer1 = new Devise(800);
	Devise* retirer2 = new Devise(200);

	ce->consulterSolde();
	cout << "\n";
	cout << ce->retirerArgent(retirer1) << endl;
	cout << "\n";
	ce->consulterSolde();
	cout << "\n";
	cout << ce->retirerArgent(retirer2) << endl;
	cout << "\n";
	ce->consulterSolde();
	cout << "\n\n";

	cp->consulterSolde();
	cout << "\n";
	cout << cp->retirerArgent(retirer1) << endl;
	cout << "\n";
	cp->consulterSolde();
	cout << "\n";
	cout << cp->retirerArgent(retirer2) << endl;
	cout << "\n";
	cp->consulterSolde();
	cout << "\n\n";

	cpe->consulterSolde();
	cout << "\n";
	cout << cpe->retirerArgent(retirer1) << endl;
	cout << "\n";
	cpe->consulterSolde();
	cout << "\n";
	cout << cpe->retirerArgent(retirer2) << endl;
	cout << "\n";
	cpe->consulterSolde();
}