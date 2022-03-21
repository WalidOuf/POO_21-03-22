#pragma once
#include <iostream>
#include <vector>
#include"Compte.h"

using namespace std;
namespace Banque {
	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		vector<Compte*> listeComptes;

	public:
		Client(string n, string p, string a);
		void afficher();
		~Client();
	};
};