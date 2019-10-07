#include<stdio.h>
#include<graphics.h>
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


void dragonmanbody()
{
    int i, j = 0,k;

    int gd=DETECT,gm;

    initgraph(&gd, &gm,NULL);
    DWORD screenwidth= GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight= GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth, screenheight, "", -2,-3);
    setcolor(GREEN);      //Dragonmanstart
    rectangle(200,200,300,300);
    int points[]= {200,200,120,250,200,300,200,200};
    drawpoly(4,points);
    int points1[]= {300,200,380,250,300,300,300,200};
    drawpoly(4,points1);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340); //dragonmanend
    delay(20);
}

void player()
{
    setcolor(WHITE); //playerstart
    circle(600,450,70);
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points2[]= {510,630,500,670,530,690,510,630};
    drawpoly(4, points2);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
}


void villainHealthPoints(int a)
{
    setcolor(RED);
    rectangle(140, 35, 300, 100);
    setfillstyle(1, BLACK);
    floodfill(141, 51, RED);
    setcolor(BLACK);
    rectangle(140, 35, 300, 100);

    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "DRAGONMAN");
    outtextxy(150, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(150, 65, str);
}


void heroHealthPoints(int a)
{
    setcolor(RED);
    rectangle(1000, 35, 1500, 100);
    setfillstyle(1, BLACK);
    floodfill(1001, 51, RED);
    setcolor(BLACK);
    rectangle(1000, 35, 1500, 100);

    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "PLAYER");
    outtextxy(1050, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(1050, 65, str);
    return;
}

chooseWeapon()
{
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points1[]= {200,200,120,250,200,300,200,200};
    drawpoly(4,points1);
    int points2[]= {300,200,380,250,300,300,300,200};
    drawpoly(4,points2);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340);
    setcolor(WHITE);
    circle(600,450,70);
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points3[]= {510,630,500,670,530,690,510,630};
    drawpoly(4,points3);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
    settextstyle(8,HORIZ_DIR,2);
    outtextxy(500,700,"Choose your weapon:");
    outtextxy(500,750,"1.Sword 2.Dagger");
    //getch();
}


attackrun()
{
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points4[]= {200,200,120,250,200,300,200,200};
    drawpoly(4,points4);
    int points5[]= {300,200,380,250,300,300,300,200};
    drawpoly(4,points5);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340);
    setcolor(WHITE);
    circle(600,450,70);
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points6[]= {510,630,500,670,530,690,510,630};
    drawpoly(4,points6);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
    settextstyle(8,HORIZ_DIR,2);
    outtextxy(500,700,"Choose one option:");
    outtextxy(500,750,"1.Attack 2.Run");
    //getch();
    //cleardevice();
}


main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth,screenheight,"",-2,-3);
    dragonmanbody();
    player();
    villainHealthPoints(100);
    heroHealthPoints(100);
    chooseWeapon();
    char weaponOption;
    weaponOption = getch() - '0';
    int *ptr;
    ptr = &player1.attack;
    if(weaponOption == 1)
        *ptr = 50;
    else if(weaponOption == 2)
        *ptr = 30;
    int i = 0;
    while(player1.healthpoints>0 && dragonman.healthpoints>0)
    {
        if(i%2 == 0)
        {
            attackrun();
            char attackOption;
            attackOption = getch() - '0';
            if(attackOption == 1)
               {
                   dragonman.healthpoints = dragonman.healthpoints - (player1.attack - dragonman.defense);
                   villainHealthPoints(dragonman.healthpoints);
               }
        }
        else
        {
            player1.healthpoints = player1.healthpoints - (dragonman.attack - player1.defense);
            heroHealthPoints(player1.healthpoints);
        }
        i++;
    }

    delay(5000);
    cleardevice();
}


