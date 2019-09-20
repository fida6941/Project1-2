//char line[50];
int Fight (player *Attacker, player *Target)
{

    //int EffectiveAttack = Attacker->attack - Target->defense;

    while (Target->healthpoints > 0)
    {
        int EffectiveAttack = Attacker->attack - Target->defense;
        if(EffectiveAttack<0)
            EffectiveAttack = 0;
        if (Attacker->autoPilot == false)
        {
            DisplayFightMenu();


            int choice;
            printf(">> "); // Indication the user should type something.
            //fgets(line, sizeof(line), stdin);
            scanf("%d", &choice);

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
    printf("1. Attack\n2. Run\n");
}
