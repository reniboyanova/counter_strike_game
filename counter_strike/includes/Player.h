#ifndef PLAYER_H
#define PLAYER_H

#include "Pistol.h"
#include "Defines.h"
#include <memory>

class Player
{
private:
    int health;
    int armor;
    std::unique_ptr<Pistol> pistol;

public:
    Player(std::istream &in = std::cin);

    void setPistol(std::unique_ptr<Pistol> &&pistol);
    void receiveDamage(PistolDamageData damage);
    bool isAlive() const;
    void reloading();

    PistolDamageData attack();
};

#endif
