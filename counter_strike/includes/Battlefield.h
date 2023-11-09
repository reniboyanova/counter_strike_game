#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include "Defines.h"
#include "Player.h"
#include <vector>
#include <map>
#include <memory>

using playersContainer = std::map<int, std::unique_ptr<Player>>;

class Battlefield
{
private:
    playersContainer players;
    void buyGuns();
    void fillGamePlayers();

public:
    Battlefield();

    void playRound();
};

#endif