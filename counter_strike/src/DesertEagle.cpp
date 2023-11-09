#include "DesertEagle.h"

DesertEagle::DesertEagle(std::istream &in)
    : Pistol(in)
{}

DesertEagle::~DesertEagle() = default;

PistolDamageData DesertEagle::shoot()
{
    PistolDamageData damage;

    if (currClipBullets > 0)
    {
        damage.roundsFired = 1;
        currClipBullets--;
    }
    else
    {
        hasToReload_ = true;
    }

    damage.fullDamage = damagePerRound;
    damage.damageToHealth = damagePerRound * 3 / 4;
    damage.damageToArmor = damagePerRound / 4;

    return damage;
}