#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "gameProperties.h"
#include "players.h"

// Function Prototype
void DisplayStats(player *Target, player *Attacker);
int Fight (player *Attacker, player *Target);
void DisplayFightMenu(void);

// Global Variables
char line[50];	  // This will contain our input.

int main ()
{
    char PlayerName[50];
    printf("Enter Player Name\n");
    gets(PlayerName);
    player *Hero = NewPlayer(NFN, PlayerName);
    player *Villain = NewPlayer(DRAGONMAN, "DRAGONMAN");

    DisplayStats(Villain, Hero);   // Before the fight.
    Fight(Hero, Villain);    // FIGHTǃ

    return(0);
}

int Fight (player *Attacker, player *Target)
{

    //int EffectiveAttack = Attacker->attack - Target->defense;

    while (Target->healthpoints > 0)
    {
        int EffectiveAttack = Attacker->attack - Target->defense;
        if (Attacker->autoPilot == false)
        {
            DisplayFightMenu();


            int choice;
            printf(">> "); // Indication the user should type something.
            fgets(line, sizeof(line), stdin);
            sscanf(line, "%d", &choice);

            switch (choice)
            {
            case 1:
                Target->healthpoints = Target->healthpoints - EffectiveAttack;
                printf("%s inflicted %d damage to %s.\n\n", Attacker->name, EffectiveAttack, Target->name);
                DisplayStats(Target, Attacker);
                break;
            case 2:
                printf("Running away!\n");
                return(0);
            default:
                printf("Wrong input. Try again.\n");
                break;
            }
        }
        else
        {
            // Autopilot. Userless player acts independently.
            Target->healthpoints = Target->healthpoints - EffectiveAttack;
            printf("%s inflicted %d damage to %s.\n\n", Attacker->name, EffectiveAttack, Target->name);
            DisplayStats(Target, Attacker);
        }

        // Once turn is finished, check to see if someone has one, otherwise, swap and continue.
        if (Target->healthpoints <= 0)
        {
            printf("%s has bested %s in combat.\n", Attacker->name, Target->name) ;
        }
        else
        {
            // Swap attacker and target.
            player *tmp = Attacker;
            Attacker = Target;
            Target = tmp;
        }

    }
    return(0);
}


void DisplayFightMenu ()
{
    printf("1) Attack\n2) Run\n");
}
