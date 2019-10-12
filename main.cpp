#include<stdio.h>
#include<graphics.h>
#include "characters.h"
#include "fight.h"

struct status
{
    char name[50];
    int healthpoints;
    int attack;    // target will lose hp of the value of attack power
    int defense;   // defense value against the attack power of attacker
};

int attackPower;
struct status player1 = {"PLAYER", 100, attackPower, 30};
struct status dragonman = {"DRAGONMAN", 100, 50, 30};
struct status magicanto = {"MAGICANTO", 200, 50, 30};
struct status bandersnatch = {"BANDERSNATCH", 300, 100, 50};

quizwintext()
{
    setcolor(BLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(150,310,"You answered correctly!");
    outtextxy(150,350,"You get spear with 5 chances");
    outtextxy(150,400,"Press any key to continue");
    getch();
    cleardevice();
}

quizlostquiz()
{
    setcolor(BLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(150,310,"Your answer is incorrect!");
    outtextxy(150,350,"You don't get new weapon");
    outtextxy(150,400,"Press any key to continue");
    getch();
    cleardevice();
}


main()
{

    int f1 = 0, f2 = 0, f3 = 0,z;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth,screenheight,"",-2,-3);

    int i,j=0,k;
again:
    for( i = 0 ; i <= 500 ; i = i + 10 )  //welcome line
    {
        setcolor(BLUE);
        settextstyle(2,HORIZ_DIR,10);
        outtextxy(150,700-i,"Welcome to Bandersnatch");
        delay(20);
        if(i==500)
            break;
        cleardevice();
    }
    delay(10);
    for( j = 0 ; j<= 500 ; j = j + 10)
    {
        setcolor(BLUE);
        settextstyle(2,HORIZ_DIR,8);
        outtextxy(150,770-i,"Press any key to continue");
        delay(10);
        if(i==500)
            break;
        cleardevice();
    }
    getch();

    cleardevice();
again1:
    setcolor(BLUE);
    settextstyle(2,HORIZ_DIR,10);
    //outtextxy(150,200,"Choose an Option");
    outtextxy(150,300,"1. Play");
    outtextxy(150,400,"2. Manual");
    outtextxy(150,500, "3. Exit");
    int input;
    while(input != 1 && input != 2 && input != 3)
        //outtextxy(150,600,"Press 1,2 or 3");
        input = getch() - '0';
    if(input==1)
    {
        cleardevice();
        malePlayerStory();
        femalePlayerStory();
        goto again2;
    }
    else if(input==2)
    {
        cleardevice();
        setcolor(WHITE);
        settextstyle(2,HORIZ_DIR,8);
        outtextxy(150,300,"As you go through the game our main character will face some questions.");
        delay(200);
        outtextxy(150,340, "Enter corresponding numbers from keyboard for any kind of input.");
        delay(200);
        outtextxy(150,380,"Fight with the enemies,collect gems and health potions as much as");
        delay(200);
        outtextxy(150,420,"possible and beat the enemies to get a possible positive outcome! Enjoy!");
        delay(200);
        outtextxy(150,460, "Press any key to continue.");
        getch();
        cleardevice();
        goto again1;
    }
    else if(input==3)
    {
        return 0;
    }


again2:
    setcolor(BLUE);
    outtextxy(150,310,"You started your journey and encountered an old man.");
    outtextxy(150,350,"Do you want to approach him?");
    outtextxy(150,380,"1. YES   2. NO");

    input=getch();
    cleardevice();
    if(input==49)
    {
        goto again3;
    }
    else
        goto again4;
    cleardevice();



again3:
    settextstyle(2,HORIZ_DIR,8);
    setcolor(BLUE);
    outtextxy(20,20,"Oldman: You are going to need more than a sword to survive.");
    delay(500);
    outtextxy(20,90,"I can give you more weapon");
    delay(500);
    outtextxy(20,160,"BUT...");
    delay(500);
    outtextxy(20,230,"You'll have to answer this question");
    delay(500);
    outtextxy(20,300,"Press enter to see the question");
    getch();
    cleardevice();
    outtextxy(200,200,"WHAT IS THE 7TH LETTER OF THE ALPHABET?");
    delay(500);
    outtextxy(300,290,"1. G");
    delay(500);
    outtextxy(300,360,"2. H");
    delay(500);
    outtextxy(300,430,"3. E");
    delay(500);
    outtextxy(300,500,"4. P");
    delay(500);
    outtextxy(20,800,"Press 1/2/3/4 to answer");
    char input2;
    while(input2 != 1 && input2 != 2 && input2 != 3 && input2 != 4)
        input2 = getch() - '0';
    cleardevice();
    int *ptr;
    if(input2 == 2)
    {
        *ptr = 80;
        ptr = &player1.attack;
        quizwintext();
    }
    else
        quizlostquiz();



    cleardevice();


    //fightdragonman
again4:

    settextstyle(2,0,10);
    outtextxy(450,200,"You encountered Dragonman!");

    delay(2000);
    cleardevice();
    dragonmanbody();
    playerbody();
    villainHealthPoints(100);
    heroHealthPoints(100);
    attackrun();
    char attackOption = 0;
    while (attackOption != 1 && attackOption != 2)
        attackOption = getch() - '0';
    if(attackOption == 1)
    {
        i = 0;
        while(player1.healthpoints>0 && dragonman.healthpoints>0)
        {
            if(i%2 == 0)
            {
                chooseWeapon();
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
                    *ptr = 30;

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
            chooseWeapon();
        }
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

//fightmagicanto

    magicantobody();
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
    getch();
}

