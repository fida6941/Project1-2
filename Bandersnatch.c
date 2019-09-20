#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "gameProperties.h"
#include "players.h"
#include "fightSystem.h"

// Function Prototype
void DisplayStats(player *Target, player *Attacker);
int Fight (player *Attacker, player *Target);
void DisplayInventory(void);


int main ()
{
    char PlayerName[50];
    printf("Enter Player Name\n");
    gets(PlayerName);

    int attackPower, choice;

    DisplayInventory();

    printf(">> ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        attackPower = 50;
        break;
    case 2:
        attackPower = 35;
        break;
    }

    player *Hero = NewPlayer(NFN, PlayerName, attackPower);
    player *Villain = NewPlayer(DRAGONMAN, "DRAGONMAN", 50);

    DisplayStats(Villain, Hero);   // Before the fight.

    Fight(Hero, Villain);    // FIGHTǃ

    return(0);
}

void DisplayInventory()
{
    printf("1. Sword\n2. Dagger\n");
}


