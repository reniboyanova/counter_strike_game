#include "Glock.h"
#include "Defines.h"

Glock::Glock(std::istream &in)
    : Pistol(in), roundsPerShot(ROUNDS_PER_SHOT)
{}

Glock::~Glock() = default;

PistolDamageData Glock::shoot()
{
    PistolDamageData damage;

    if (currClipBullets >= roundsPerShot)
    {
        damage.roundsFired = roundsPerShot;
        currClipBullets -= roundsPerShot;
    }
        
    else
    {
        damage.roundsFired = currClipBullets;
        currClipBullets = 0;
        if (currClipBullets <= 0)
        {
            hasToReload_ = true;
        }
    }

    damage.fullDamage = damagePerRound;
    damage.damageToHealth = damagePerRound / 2;
    damage.damageToArmor = damagePerRound / 2;

    return damage;
}