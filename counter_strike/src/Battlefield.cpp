#include "Battlefield.h"
#include <iostream>
#include "DesertEagle.h"
#include "Glock.h"

Battlefield::Battlefield()
{}

void Battlefield::fillGamePlayers() // we can use it in future
{
    std::cout << INSERT_NUM_PLAYERS << std::endl;

    int numberOfPlayers = 0;
    std::cin >> numberOfPlayers;

    for (int i = 0; i < numberOfPlayers; i++)
    {
        std::unique_ptr<Player> player = std::make_unique<Player>();
        players[i] = std::move(player);
    }

    buyGuns();
}

void Battlefield::buyGuns()
{
    for (auto &playerInfo : players)
    {
        int pistolType = 0;
        std::cin >> pistolType;
        std::unique_ptr<Pistol> pistol = nullptr;

        switch (pistolType)
        {
        case GLOCK:
            pistol.reset(new Glock());
            break;
        case DESERT_EAGLE:
            pistol.reset(new DesertEagle());
            break;
        default:
            std::cerr << pistolType << INVALID_WEAPON << std::endl;
            throw std::exception();
            break;
        }

        playerInfo.second->setPistol(std::move(pistol));
    }
}

void Battlefield::playRound()
{
    int shooterId = PLAYER_ONE;
    int targetId = PLAYER_TWO;

    fillGamePlayers();

    std::cout << std::endl;
    while (true)
    {
        std::cout << PLAYER_ID << shooterId << TURN << std::endl;

        players[targetId]->receiveDamage(players[shooterId]->attack());
        if (!players[targetId]->isAlive())
        {
            std::cout << PLAYER_WITH_ID << shooterId << WINS << std::endl;
            return;
        }
        players[shooterId]->reloading();
        std::cout << std::endl;

        std::swap(shooterId, targetId);
    }
}