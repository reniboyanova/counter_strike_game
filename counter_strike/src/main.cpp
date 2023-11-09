#include <iostream>
#include "Defines.h"
#include "Battlefield.h"

int main()
{
    int playerChoice = 0;
    std::cout << CHOOSE_GAME << std::endl;
    std::cin >> playerChoice;

    if (playerChoice == START_DEMO_GAME)
    {
        Battlefield battlefield;
        battlefield.playRound();
    }
    else
    {
        int teamChoice = 0;
        std::cout << CHOOSE_TEAM << std::endl;
    }

    return EXIT_SUCCESS;
}
