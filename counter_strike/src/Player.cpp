#include "Player.h"
#include <iostream>

Player::Player(std::istream &in)
    : health(0), armor(0), pistol(nullptr)
{
    in >> health >> armor;
}

void Player::setPistol(std::unique_ptr<Pistol> &&pistol)
{
    this->pistol.reset(pistol.release());
}

void Player::reloading()
{
     if (pistol->hasToReload())
     {
         pistol->reload();
     }
}

PistolDamageData Player::attack()
{
   
    return pistol->shoot();
}

void Player::receiveDamage(PistolDamageData damage)
{
    for (int i = 0; i < damage.roundsFired && isAlive(); i++)
    {
        if (armor > 0)
        {
            health -= damage.damageToHealth;
            armor -= damage.damageToArmor;

            if (armor < 0)
            {
                int excessDamage = -armor;
                armor = 0;
                health -= excessDamage;
            }
        }
        else
        {
            health -= damage.fullDamage;
        }

        std::cout << ENEMY_LEFT_WITH << health
                  << HEALTH_AND << armor << ARMOR
                  << std::endl;
    }
}

bool Player::isAlive() const
{
    return health > 0;
}