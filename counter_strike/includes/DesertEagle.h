#ifndef DESERT_EAGLE_H
#define DESERT_EAGLE_H

#include "Pistol.h"

class DesertEagle : public Pistol
{
public:
    DesertEagle(std::istream &in = std::cin);
    ~DesertEagle() override;

    PistolDamageData shoot() override;
};

#endif