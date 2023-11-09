#ifndef PISTOL_H
#define PISTOL_H

#include "Defines.h"
#include <iostream>

class Pistol
{
protected:
    int damagePerRound;
    int clipSize;
    int currClipBullets;
    int remainingAmmo;
    bool hasToReload_;

public:
    Pistol(std::istream &in = std::cin);
    virtual ~Pistol();

    virtual PistolDamageData shoot() = 0;
    void reload();
    bool hasToReload();
};

#endif
