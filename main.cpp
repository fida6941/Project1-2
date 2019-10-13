#include<stdio.h>
#include<graphics.h>
#include "characters.h"
#include "fight.h"
#include "story.h"
#include "fightintheforest.h"
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

int gem = 30, flamethrower = 0, healingPotion = 0, swordAttack = 50, bluebeam = 0;
main()
{

    int f1 = 0, f2 = 0, f3 = 0, z, i;
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
    int input, flamethrower = 0;
    while(input != 1 && input != 2 && input != 3)
        input = getch() - '0';
    cleardevice();
    if(input == 1)
        goto fightdragonman;
    else if (input == 3)
    {
        dragonmanpuzzle();
        int input10;
        while(input10 != 1 && input10 !=2 && input10 != 3 && input10 != 4)
            input10 = getch() - '0';
        cleardevice();
        if(input10 == 3)
        {
            dragonmanpuzzleright();
            gem = gem + 50;
            int input11;
            while(input11 != 1 && input11 != 2)
                input11 = getch() - '0';
            cleardevice();
            if(input11 == 1)
            {
                friendlocation();
                goto villagegate;
            }
            else if(input11 == 2)
            {
                flamethrower = 2;
                setcolor(YELLOW);
                settextstyle(2,HORIZ_DIR,10);
                outtextxy(250,250,"Now you have Dragonman's flame thrower!");
                delay(500);
                outtextxy(250,300,"You can use it twice");
                getch();
                cleardevice();
                goto villagegate;
            }
        }
        else
        {
            dragonmanpuzzlewrong();
            goto fightdragonman;
        }
    }

fightdragonman:
    dragonmanbody();
    playerbody();
    villainHealthPoints(100);
    heroHealthPoints(100);
    i = 0;
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
                *ptr = swordAttack;
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
    if(player1.healthpoints==0)
    {
        wintextdragon();
        gem = gem - 10;
    }
    else
    {
        dragonmanloses();
        f1 = 1;
        flamethrower = 2;
        gem = gem + 100;
    }
    delay(500);
    cleardevice();


//village
villagegate:
    villagemap();
    direction();
    int input2 = 0;
    while(input2 != 1 && input2 != 2)
        input2 = getch() - '0';
    cleardevice();
    if(input2 == 1)
    {
shop:
        villageshop();
        int input3 = 0;
        while(input3 != 1 && input3 != 2 && input3 != 3 && input3 != 4)
            input3 = getch() - '0';
            cleardevice();
        if(input3 == 1)
        {
            if(gem<20)
            {
                setcolor(WHITE);
                settextstyle(2,HORIZ_DIR,10);
                outtextxy(200,300,"You don't have enough gems!");
                delay(1000);
                settextstyle(2,HORIZ_DIR,8);
                outtextxy(200,400,"Press any key to return to the shop");
                getch();
                goto shop;
            }
            else
            {
                gem = gem - 20;
                healingPotion++;
                setcolor(WHITE);
                settextstyle(2,HORIZ_DIR,10);
                outtextxy(200,250,"You can use this healing potion once in a fight");
                outtextxy(200,300,"to increase your health points");
                delay(1000);
                settextstyle(2,HORIZ_DIR,8);
                outtextxy(200,400,"Press any key to return to the shop");
                getch();
                cleardevice();
                goto shop;
            }
        }
        else if(input3 == 2)
        {
            if(gem<50)
            {
                setcolor(WHITE);
                settextstyle(2,HORIZ_DIR,10);
                outtextxy(200,300,"You don't have enough gems!");
                delay(1000);
                settextstyle(2,HORIZ_DIR,8);
                outtextxy(200,400,"Press any key to return to the shop");
                 getch();
                cleardevice();
                goto shop;
            }
            else
            {
                gem = gem - 50;
                int *ptr;
                ptr = &player1.defense;
                *ptr += 20;
                setcolor(WHITE);
                settextstyle(2,HORIZ_DIR,10);
                outtextxy(200,250,"Your defense power increased!");
                delay(1000);
                settextstyle(2,HORIZ_DIR,8);
                outtextxy(200,350,"Press any key to return to the shop");
                getch();
                cleardevice();
                goto shop;
            }
        }
        else if(input3 == 3)
        {
            if(gem<50)
            {
                setcolor(WHITE);
                settextstyle(2,HORIZ_DIR,10);
                outtextxy(200,300,"You don't have enough gems!");
                delay(1000);
                settextstyle(2,HORIZ_DIR,8);
                outtextxy(200,400,"Press any key to return to the shop");
                 getch();
                cleardevice();
                goto shop;
            }
            else
            {
                gem = gem - 50;
                swordAttack = swordAttack + 20;
                setcolor(WHITE);
                settextstyle(2,HORIZ_DIR,10);
                outtextxy(200,250,"Your sword's attack power increased!");
                delay(1000);
                settextstyle(2,HORIZ_DIR,8);
                outtextxy(200,350,"Press any key to return to the shop");
                getch();
                cleardevice();
                goto shop;
            }
        }
        else if(input3 == 4)
        {
            goto Forward;
        }
        Forward:
        graveyard();
        int input4;
        while(input4 != 1 && input4 != 2)
            input4 = getch() - '0';
            cleardevice();
        if(input4 == 1)
            goto magicanto;
        else if(input4 == 2)
            goto villagegate;
    }

    else if(input2 == 2)
    {
        snitchoption();
        int input5;
        while(input5 != 1 && input5 != 2)
            input5 = getch() - '0';
        cleardevice();
        if(input5 == 2)
            goto magicanto;
        else if(input5 == 1)
        {
            gem = gem + 25;
            if(flamethrower == 2)
                weaponchoice2();
            else
                weaponchoice1();
            int input9;
            while(input9 != 1 && input9 != 2)
                input9 = getch() - '0';
            cleardevice();
            if(input9 == 1)
            {
                attacksnitches();
                earngems();
            }
            else if(input9 == 2)
            {
                blowsnitches();
                flamethrower = 1;
                earngems();
                goto magicanto;
            }

        }
    }

magicanto:
    setcolor(WHITE);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(400,200,"Magicanto has captivated your friend!");
    outtextxy(400,250,"What would you like to do?");
    outtextxy(450,350,"1. Fight him");
    outtextxy(450,400,"2. Try to be his friend");
    outtextxy(450,450,"3. Run away");
    int input6;
    while(input6 != 1 && input6 != 2 && input6 != 3)
        input6 = getch() - '0';
        cleardevice();
    if(input6 == 1)
        goto fightmagicanto;
    else if(input6 == 2)
    {
        magicantopuzzle();
        int input7;
        while(input7 != 1 && input7 != 2)
            input7 = getch() - '0';
        cleardevice();
        if(input7 == 1)
        {
            magicantopuzzlewrong();
            goto fightmagicanto;
        }
        else if(input7 == 2)
        {
            magicantopuzzleright();
            int input8;
            while(input8 != 1 && input8 != 2)
                input8 = getch() - '0';
            cleardevice();
            if(input8 == 1)
            {
                friendback();
            }
            else if(input8 == 2)
            {
                gotblubeam();
                bluebeam = 1;
            }
        }
    }

fightmagicanto:
    magicantobody();
    /*playerbody();
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

