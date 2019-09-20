typedef enum ClassEnum
{
    NFN,
    DRAGONMAN,
    ENEMY2,
    ENEMY3
} class;

// Player Structure
typedef struct playerStructure
{
    char name[50];
    class class;
    int healthpoints;
    int attack;    // NEWː Attack power.
    int defense;   // NEWː Resistance to attack.
    bool autoPilot;
} player;
