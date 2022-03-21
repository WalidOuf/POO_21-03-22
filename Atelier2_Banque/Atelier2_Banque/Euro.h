#pragma once
#include "Devise.h"
#include <iostream>

using namespace std;

namespace Banque {
    class Euro :
        public Devise
    {
    private:
        string symbole;
    public:
        Euro(double val);
    };
};