#pragma once
#include "Devise.h"
#include<iostream>

using namespace std;

namespace Banque {
    class Mad :
        public Devise
    {
    private:
        string symbole;
    public:
        Mad(double val);
    };
};