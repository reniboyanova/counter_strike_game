#ifndef DEFINES_H
#define DEFINES_H

enum StartGameMenu
{
    START_DEMO_GAME = 0,
    START_TEAM_GAME = 1
};

enum PistolType
{
    GLOCK,
    DESERT_EAGLE
};

enum GlockDefines
{
    ROUNDS_PER_SHOT = 3
};

enum PlayerDefines
{
    PLAYER_ONE,
    PLAYER_TWO,
    PLAYERS_COUNT
};

struct PistolDamageData
{
    int fullDamage = 0;
    int damageToHealth = 0;
    int damageToArmor = 0;
    int roundsFired = 0;
};

constexpr const char* INSERT_NUM_PLAYERS = "Insert number of players, please";
constexpr const char* INVALID_WEAPON = " is not a valid pistol type";
constexpr const char* PLAYER_ID = "PlayerID ";
constexpr const char* TURN = " turn:";
constexpr const char* PLAYER_WITH_ID = "\nPlayer with ID: ";
constexpr const char* WINS = " wins!";
constexpr const char* CHOOSE_GAME = "Choose an options for game:\n(0 - START DEMO GAME; 1 - START GAME WITH TEAMS: )";
constexpr const char* CHOOSE_TEAM = "Choose team:\n(1 - TERRORISTS; 2 - CONTRA TERRORISTS: )";
constexpr const char* OUT_OF_AMMO = "No ammo left";
constexpr const char* RELOADING = "Reloading...";
constexpr const char* CURRENT_CLIP_BULLETS = "currClipBullets: ";
constexpr const char* REMAINING_AMMO = ", remainingAmmo: ";
constexpr const char* ENEMY_LEFT_WITH = "Enemy left with: ";
constexpr const char* HEALTH_AND = " health and ";
constexpr const char* ARMOR = " armor";

#endif
