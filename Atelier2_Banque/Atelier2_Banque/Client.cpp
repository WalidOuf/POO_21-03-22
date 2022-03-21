#include "Client.h"

using namespace Banque;
Client::Client(string nom = 0, string prenom = 0, string adresse = 0)
{
	this->nom = nom;
	this->prenom = prenom;
	this->adresse = adresse;
}

void Banque::Client::afficher()
{
	std::cout << "Nom : " << nom << endl;
	std::cout << "Prenom : " << nom << endl;
	std::cout << "Adresse : " << nom << endl;
}

Banque::Client::~Client()
{
	std::cout << "Destructeur de classe Client."
}
