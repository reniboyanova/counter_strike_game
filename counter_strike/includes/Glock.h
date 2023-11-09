#ifndef GLOCK_H
#define GLOCK_H

#include "Pistol.h"

class Glock : public Pistol
{
private:
    int roundsPerShot;

public:
    Glock(std::istream &in = std::cin);
    ~Glock() override;

    PistolDamageData shoot() override;
};

#endif
