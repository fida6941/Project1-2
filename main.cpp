#include<stdio.h>
#include<graphics.h>
#include "characters.h"
#include "fight.h"
#include "story.h"

struct status
{
    char name[50];
    int healthpoints;
    int attack;    // target will lose hp of the value of attack power
    int defense;   // defense value against the attack power of attacker
};

int attackPower;
struct status player1 = {"PLAYER", 100, attackPower, 10};
struct status dragonman = {"DRAGONMAN", 100, 50, 20};
struct status magicanto = {"MAGICANTO", 200, 50, 30};
struct status bandersnatch = {"BANDERSNATCH", 300, 100, 50};


main()
{

    int f1 = 0, f2 = 0, f3 = 0,z;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth,screenheight,"",-2,-3);

    interface1();
    interface2();
    int spear = oldmanquiz();
    friendgone();

//fight dragonman
fightoption();
int input, flamethrower = 0, gem;
while(input != 1 && input != 2 && input != 3)
    input = getch() - '0';
    cleardevice();
if (input == 3)
{
     flamethrower = dragonmanpuzzle();
}
if(flamethrower == 2)
{
    gem = 50;
}
else if(flamethrower == 0)
{
    dragonmanbody();
    playerbody();
    villainHealthPoints(100);
    heroHealthPoints(100);
    char attackOption = 0;
    while (attackOption != 1 && attackOption != 2)
        attackOption = getch() - '0';
    if(attackOption == 1)
    {
        int i = 0;
        while(player1.healthpoints>0 && dragonman.healthpoints>0)
        {
            if(i%2 == 0)
            {
                if(spear == 0)
                    chooseSword();
                else if(spear>0)
                    chooseSwordSpear();
                char weaponOption = 0;
                while (weaponOption != 1 && weaponOption != 2)
                    weaponOption = getch() - '0';
                int *ptr;
                ptr = &player1.attack;
                if(weaponOption == 1)
                {
                    *ptr = 50;
                    playerattacksword();
                }
                else if(weaponOption == 2)
                {
                    playerattacksword();
                    *ptr = 70;
                    spear--;
                }

                dragonman.healthpoints = dragonman.healthpoints - (player1.attack - dragonman.defense);
                villainHealthPoints(dragonman.healthpoints);
                if(dragonman.healthpoints<0)
                    dragonman.healthpoints=0;


            }
            else
            {
                dragonmanAttack();
                player1.healthpoints = player1.healthpoints - (dragonman.attack - player1.defense);
                if(player1.healthpoints<0)
                    player1.healthpoints=0;
                heroHealthPoints(player1.healthpoints);
            }
            i++;
            playerbody();
            dragonmanbody();
            villainHealthPoints(dragonman.healthpoints);
            heroHealthPoints(player1.healthpoints);
            if(spear == 0)
                chooseSword();
            else if(spear>0)
                chooseSwordSpear();
        }
    }

    else if(flamethrower == -1)
{
    flamethrower = 0;
    gem = 50;
}


    delay(500);
    cleardevice();

    if(player1.healthpoints==0)
    {
        wintextdragon();
    }
    else
    {
        losetextdragon();
        f1 = 1;
    }
}
//fightmagicanto

    /* magicantobody();
     playerbody();
     villainHealthPoints2(200);
     heroHealthPoints(100);
     player1.healthpoints=100;
     attackrun();
     attackOption = 0;
     while(attackOption != 1 && attackOption != 2)
         attackOption = getch() - '0';
     if(attackOption == 1)
     {
         i = 0;
         while(player1.healthpoints>0 && magicanto.healthpoints>0)
         {
             if(i%2 == 0)
             {
                 if(f1 == 1)
                     chooseWeapon2();
                 else
                     chooseWeapon();
                 char weaponOption = 0;
                 while(weaponOption != 1 && weaponOption != 2 && weaponOption != 3)
                     weaponOption = getch() - '0';
                 ptr = &player1.attack;
                 if(weaponOption == 1)
                 {
                     *ptr = 60;
                     playerattacksword();
                 }
                 else if(weaponOption == 2)
                     *ptr = 30;
                 else if(weaponOption == 3)
                 {
                     *ptr = 80;
                     playerattackflame();
                 }

                 magicanto.healthpoints = magicanto.healthpoints - (player1.attack - magicanto.defense);
                 if(magicanto.healthpoints<0)
                     magicanto.healthpoints=0;
                 villainHealthPoints2(magicanto.healthpoints);
             }
             else
             {
                 magicantoAttack();
                 player1.healthpoints = player1.healthpoints - (magicanto.attack - player1.defense);
                 if(player1.healthpoints<0)
                     player1.healthpoints=0;
                 heroHealthPoints(player1.healthpoints);
             }
             i++;
             playerbody();
             magicantobody();
             villainHealthPoints2(magicanto.healthpoints);
             heroHealthPoints(player1.healthpoints);
             if(f1 == 1)
                 chooseWeapon2();
             else
                 chooseWeapon();
         }
     }

     delay(500);
     cleardevice();

     if(player1.healthpoints==0)
     {
         wintextmagicanto();
     }
     else if(magicanto.healthpoints==0)
     {
         losetextmagicanto();
         f2 = 1;
     }

     //fightbandersnatch

     bandersnatchbody();
     playerbody();
     villainHealthPoints3(300);
     heroHealthPoints(100);
     player1.healthpoints=100;
     attackrun();
     attackOption = 0;
     while(attackOption != 1 && attackOption != 2)
         attackOption = getch() - '0';
     if(attackOption == 1)
     {

         i = 0;
         while(player1.healthpoints>0 && bandersnatch.healthpoints>0)
         {
             if(i%2 == 0)
             {
                 if(f1 == 1 && f2 == 1)
                     chooseWeapon3();
                 else if(f1 == 1 && f2 == 0)
                     chooseWeapon2();
                 else if(f1 == 0 && f2 == 1)
                     chooseWeapon4();
                 else if(f1 == 0 && f2 == 0)
                     chooseWeapon();
                 char weaponOption = 0;
                 while(weaponOption != 1 && weaponOption != 2 && weaponOption != 3 && weaponOption != 4)
                     weaponOption = getch() - '0';
                 ptr = &player1.attack;
                 if(weaponOption == 1)
                 {
                     *ptr = 70;
                     playerattacksword();
                 }
                 else if(weaponOption == 2)
                     *ptr = 30;
                 else if(weaponOption == 3)
                 {
                     *ptr = 80;
                     playerattackflame();
                 }
                 else if(weaponOption == 4)
                 {
                     *ptr = 200;
                     playerattackblueflame();
                 }

                 bandersnatch.healthpoints = bandersnatch.healthpoints - (player1.attack - bandersnatch.defense);
                 if(bandersnatch.healthpoints<0)
                     bandersnatch.healthpoints=0;
                 villainHealthPoints3(bandersnatch.healthpoints);


             }
             else
             {
                 bandersnatchAttack();
                 player1.healthpoints = player1.healthpoints - (bandersnatch.attack - player1.defense);
                 if(player1.healthpoints<0)
                     player1.healthpoints=0;
                 heroHealthPoints(player1.healthpoints);
             }
             i++;
             playerbody();
             bandersnatchbody();
             villainHealthPoints3(bandersnatch.healthpoints);
             heroHealthPoints(player1.healthpoints);
             if(f1 == 1 && f2 == 1)
                 chooseWeapon3();
             else if(f1 == 1 && f2 == 0)
                 chooseWeapon2();
             else if(f1 == 0 && f2 == 1)
                 chooseWeapon4();
             else if(f1 == 0 && f2 == 0)
                 chooseWeapon();
         }
     }

     delay(500);
     cleardevice();

     if(player1.healthpoints==0)
     {
         wintextbandersnatch();
     }
     else if(bandersnatch.healthpoints=0)
     {
         losetextbandersnatch();
         f3 = 1;
     }
     getch();*/
}

