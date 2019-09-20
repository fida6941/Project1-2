// Creates player and sets class.
player* NewPlayer(class class, char name[50], int attackPower)
{
    // Allocate memory to player pointer.
    player *tempPlayer = malloc(sizeof(player));
    SetName(tempPlayer, name);

    static int PlayersCreated = 0; // Keep track of players created.
    if (PlayersCreated > 0)
    {
        tempPlayer->autoPilot = true;
    }
    else
    {
        tempPlayer->autoPilot = false;
    }
    ++PlayersCreated;

    // Assign stats based on the given class.
    switch(class)
    {
    case NFN:
        tempPlayer->healthpoints = 100;
        tempPlayer->attack = attackPower;
        tempPlayer->defense = 30;
        tempPlayer->class = NFN;
        break;

    case DRAGONMAN:
        tempPlayer->healthpoints = 100;
        tempPlayer->attack = attackPower;
        tempPlayer->defense = 30;
        tempPlayer->class = DRAGONMAN;
        break;

    case ENEMY2:
        tempPlayer->healthpoints = 200;
        tempPlayer->attack = 50;
        tempPlayer->defense = 30;
        tempPlayer->class = ENEMY2;
        break;

    case ENEMY3:
        tempPlayer->healthpoints = 300;
        tempPlayer->attack = 100;
        tempPlayer->defense = 50;
        tempPlayer->class = ENEMY3;
        break;
    }

    return(tempPlayer); // Return memory address of player.
}

void DisplayStats(player *target, player *attacker)
{
    printf("%s\nHP: %d\n\n", target->name, target->healthpoints);
     printf("%s\nHP: %d\n\n", attacker->name, attacker->healthpoints);
}

int SetName(player *target, char name[50])
{
    strcpy(target->name, name);
    return(0);
}
