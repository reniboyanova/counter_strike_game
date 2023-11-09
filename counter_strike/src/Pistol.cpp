#include "Pistol.h"
#include <iostream>

Pistol::Pistol(std::istream &in)
    : damagePerRound(0)
    , clipSize(0)
    , currClipBullets(0)
    , remainingAmmo(0)
    , hasToReload_(false)
{
    in >> damagePerRound >> clipSize >> remainingAmmo;
    currClipBullets = clipSize;
}

Pistol::~Pistol() = default;

void Pistol::reload()
{
    if (remainingAmmo == 0)
    {
        std::cout << OUT_OF_AMMO << std::endl;
        return;
    }

    std::cout << RELOADING << std::endl;

    int ammoToReload = clipSize - currClipBullets;
    if (ammoToReload > remainingAmmo)
    {
        ammoToReload = remainingAmmo;
    }

    remainingAmmo -= ammoToReload;
    currClipBullets += ammoToReload;

    hasToReload_ = false;

    std::cout << CURRENT_CLIP_BULLETS << currClipBullets
        << REMAINING_AMMO << remainingAmmo << std::endl;
}

bool Pistol::hasToReload()
{
    return hasToReload_;
}