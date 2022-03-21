#pragma once
#include "Compte.h"

namespace Banque {
    class CompteCourant :
        public Compte
    {
    private:
        Devise* decouvert;
    public:
        CompteCourant(Client* prop, Devise* m, Devise* d);
        bool retirerArgent(Devise* montant);
    };
};