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

void dragonmanbody()
{
    int i, j = 0,k;
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
    //delay(20);
}

void magicantobody()
{
    int points16[]= {300,230,260,150,340,150,300,230};
    drawpoly(4,points16);//magicantobody
    line(320,160,310,170);
    line(280,160,290,170);
    setcolor(RED);
    int points17[]= {240,150,360,150,340,130,260,130,240,150};
    drawpoly(5,points17);
    int points18[]= {270,130,330,130,300,70,270,130};
    drawpoly(4,points18);
    setcolor(YELLOW);
    line(300,230,360,230);
    line(360,230,360,280);
    line(360,280,300,230);
    line(300,230,240,230);
    line(240,230,240,280);
    line(240,280,300,230);
    line(250,270,240,380);
    line(240,380,370,380);
    line(370,380,350,270);
    line(360,230,400,270);
    line(400,270,400,310);
    line(400,310,360,280);
}

void bandersnatchbody()
{
    setcolor(YELLOW); //bandersnatchstart
    int points19[]= {400,350,370,300,440,300,400,350};
    drawpoly(4,points19);
    line(440,300,480,230);
    line(480,230,550,230);
    line(550,230,510,300);
    line(510,300,440,300);
    line(370,300,330,230);
    line(330,230,260,230);
    line(260,230,300,300);
    line(300,300,370,300);
    line(400,350,335,350);
    line(400,350,475,350);
    line(475,350,430,400);
    line(430,400,380,400);
    line(335,350,380,400);
    line(380,400,400,370);
    line(400,370,430,400);
    line(515,230,475,300);
    line(295,230,335,300);
    line(260,230,335,140);
    line(550,230,475,140);
    line(382,140,335,140);
    line(475,140,428,140);
    line(428,140,400,180);
    line(382,140,400,180);
    line(375,60,440,60);
    line(440,90,510,90);
    line(510,90,610,230);
    line(610,230,600,400);
    line( 550,430,550,300);
    line(540,430,540,320);
    line(500,450,500,350);
    line(310,450,310,350);
    line(270,430,270,320);
    line(280,430,280,320);
    line(310,90,375,90);
    line(310,90,210,230);
    line(210,230,220,400);
}

void playerbody()
{
    setcolor(WHITE); //playerstart
    circle(700,450,70);
    line(630,450,770,450);
    line(630,450,700,470);
    line(700,470,790,470);
    line(790,470,770,450);
    line(630,520,770,520);
    line(630,520,610,530);
    line(610,530,610,620);
    line(630,520,630,610);
    line(790,520,610,630);
    line(770,540,770,520);
    line(790,580,790,520);
    line(770,580,770,630);
    line(790,580,630,690);
    int points2[]= {610,630,600,670,630,690,610,630};
    drawpoly(4, points2);
    line(790,560,820,540);
    line(790,550,820,530);
    line(820,540,820,530);
}

void villainHealthPoints(int a)
{
    setcolor(RED);
    rectangle(140, 35, 300, 100);
    setfillstyle(1, BLACK);
    floodfill(141, 51, RED);
    setcolor(BLACK);
    rectangle(140, 35, 300, 100);
    setcolor(BLUE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "DRAGONMAN");
    outtextxy(150, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(150, 65, str);
}

void villainHealthPoints2(int a)
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
    sprintf(str, "MAGICANTO");
    outtextxy(150, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(150, 65, str);
}

void villainHealthPoints3(int a)
{
    setcolor(WHITE);
    rectangle(140, 35, 300, 100);
    setfillstyle(1, BLACK);
    floodfill(141, 51, RED);
    setcolor(BLACK);
    rectangle(140, 35, 300, 100);
    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "BANDERSNATCH");
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
    setcolor(RED);
    rectangle(490, 740, 900, 800);
    setfillstyle(1, BLACK);
    floodfill(491, 741, RED);
    setcolor(BLACK);
    rectangle(490, 740, 900, 800);

    setcolor(WHITE);
    settextstyle(8,HORIZ_DIR,2);
    outtextxy(500,700,"Choose your weapon:");
    outtextxy(500,750,"1.Sword 2.Axe");
}

chooseWeapon2()
{
    setcolor(RED);
    rectangle(490, 740, 900, 800);
    setfillstyle(1, BLACK);
    floodfill(491, 741, RED);
    setcolor(BLACK);
    rectangle(490, 740, 900, 800);

    setcolor(WHITE);
    settextstyle(8,HORIZ_DIR,2);
    outtextxy(500,700,"Choose your weapon:");
    outtextxy(500,720,"1.Sword 2.Axe 3.Flame Thrower");
}

chooseWeapon3()
{
//3rdfught0.1                                                            settextstyle(8,HORIZ_DIR,2);
    setcolor(RED);
    rectangle(490, 740, 900, 800);
    setfillstyle(1, BLACK);
    floodfill(491, 741, RED);
    setcolor(BLACK);
    rectangle(490, 740, 900, 800);

    setcolor(WHITE);
    outtextxy(500,700,"Choose your weapon:");
    outtextxy(500,720,"1.Sword 2.Axe");
    outtextxy(500,740,"3. Flame thrower 4. Blue Flame");
}

chooseWeapon4()
{
    //3rdfight0.2                                                                 settextstyle(8,HORIZ_DIR,2);
    setcolor(RED);
    rectangle(490, 740, 900, 800);
    setfillstyle(1, BLACK);
    floodfill(491, 741, RED);
    setcolor(BLACK);
    rectangle(490, 740, 900, 800);

    setcolor(WHITE);
    outtextxy(500,700,"Choose your weapon:");
    outtextxy(500,720,"1.Sword 2.Axe");
    outtextxy(500,720,"3. Blue Flame");
}

attackrun()
{
    setcolor(RED);
    rectangle(490, 700, 1100, 800);
    setfillstyle(1, BLACK);
    floodfill(491, 741, RED);
    setcolor(BLACK);
    rectangle(490, 700, 1100, 800);

    setcolor(WHITE);
    settextstyle(8,HORIZ_DIR,2);
    outtextxy(500,700,"Choose one option:");
    outtextxy(500,750,"1.Attack 2.Run");
}

playerattacksword()
{
    setcolor(WHITE);
    circle(700,450,70);
    line(630,450,770,450);
    line(630,450,700,470);
    line(700,470,790,470);
    line(790,470,770,450);
    line(630,520,770,520);
    line(630,520,610,530);
    line(610,530,610,620);
    line(630,520,630,610);
    line(610,520,550,470);
    line(550,470,550,490);
    line(550,490,610,540);
    int v;
    for(v=0; v<=200; v=v+10)
    {
        setcolor(WHITE);
        circle(550-v,490-v,20);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(550-v,490-v,WHITE);
        delay(50);
        if(v==200)
            break;

    }
    delay(1000);
    cleardevice();
    setcolor(WHITE); //playerstart
    circle(700,450,70);
    line(630,450,770,450);
    line(630,450,700,470);
    line(700,470,790,470);
    line(790,470,770,450);
    line(630,520,770,520);
    line(630,520,610,530);
    line(610,530,610,620);
    line(630,520,630,610);
    line(790,520,610,630);
    line(770,540,770,520);
    line(790,580,790,520);
    line(770,580,770,630);
    line(790,580,630,690);
    int points2[]= {610,630,600,670,630,690,610,630};
    drawpoly(4, points2);
    line(790,560,820,540);
    line(790,550,820,530);
    line(820,540,820,530);
}

playerattackflame()
{
    setcolor(WHITE);
    circle(700,450,70);
    line(630,450,770,450);
    line(630,450,700,470);
    line(700,470,790,470);
    line(790,470,770,450);
    line(630,520,770,520);
    line(630,520,610,530);
    line(610,530,610,620);
    line(630,520,630,610);
    line(610,520,550,470);
    line(550,470,550,490);
    line(550,490,610,540);
    int v;
    for(v=0; v<=200; v=v+10)
    {
        setcolor(RED);
        circle(550-v,490-v,20);
        setfillstyle(SOLID_FILL, RED);
        floodfill(550-v,490-v,RED);
        delay(50);
        if(v==200)
            break;

    }
    delay(1000);
    cleardevice();
    setcolor(WHITE); //playerstart
    circle(700,450,70);
    line(630,450,770,450);
    line(630,450,700,470);
    line(700,470,790,470);
    line(790,470,770,450);
    line(630,520,770,520);
    line(630,520,610,530);
    line(610,530,610,620);
    line(630,520,630,610);
    line(790,520,610,630);
    line(770,540,770,520);
    line(790,580,790,520);
    line(770,580,770,630);
    line(790,580,630,690);
    int points2[]= {610,630,600,670,630,690,610,630};
    drawpoly(4, points2);
    line(790,560,820,540);
    line(790,550,820,530);
    line(820,540,820,530);
}

void playerattackblueflame()
{
    setcolor(WHITE);
    circle(700,450,70);
    line(630,450,770,450);
    line(630,450,700,470);
    line(700,470,790,470);
    line(790,470,770,450);
    line(630,520,770,520);
    line(630,520,610,530);
    line(610,530,610,620);
    line(630,520,630,610);
    line(610,520,550,470);
    line(550,470,550,490);
    line(550,490,610,540);
    int v;
    for(v=0; v<=200; v=v+10)
    {
        setcolor(BLUE);
        circle(550-v,490-v,20);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(550-v,490-v,BLUE);
        delay(50);
        if(v==200)
            break;

    }
    delay(1000);
    cleardevice();
    setcolor(WHITE); //playerstart
    circle(700,450,70);
    line(630,450,770,450);
    line(630,450,700,470);
    line(700,470,790,470);
    line(790,470,770,450);
    line(630,520,770,520);
    line(630,520,610,530);
    line(610,530,610,620);
    line(630,520,630,610);
    line(790,520,610,630);
    line(770,540,770,520);
    line(790,580,790,520);
    line(770,580,770,630);
    line(790,580,630,690);
    int points2[]= {610,630,600,670,630,690,610,630};
    drawpoly(4, points2);
    line(790,560,820,540);
    line(790,550,820,530);
    line(820,540,820,530);
}

void dragonmanAttack()
{
    int i,j,k;
    for(i=0,j=0; i<=300; i=i+10,j=j+5)  //dragon attacks
    {
        setcolor(RED);
        circle(250+i,250+i,20+j);
        setfillstyle(SOLID_FILL, RED);
        floodfill(250+i,250+i,RED);
        delay(50);
        if(i==300)
            break;
        k=j;
    }
    delay(30);
    cleardevice();
    setcolor(GREEN);      //Dragonmanstart
    rectangle(200,200,300,300);
    int points3[]= {200,200,120,250,200,300,200,200}; //second scene,player attacks;
    drawpoly(4,points3);
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
    rectangle(260,300,300,340); //dragonmanend
    //delay(500);
}

void magicantoAttack()
{
    int q,u,i,j,k;         //magicantoattack
    for(q=0,u=0; q<=300; q=q+10,u=u+5)
    {
        setcolor(BLUE);
        circle(420+q,280+q,20+u);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(420+q,280+q,BLUE);
        delay(50);
        if(i==300)
            break;
        k=j;
    }
    delay(30);
    cleardevice();
    int points16[]= {300,230,260,150,340,150,300,230};
    drawpoly(4,points16);//magicantobody
    line(320,160,310,170);
    line(280,160,290,170);
    setcolor(RED);
    int points17[]= {240,150,360,150,340,130,260,130,240,150};
    drawpoly(5,points17);
    int points18[]= {270,130,330,130,300,70,270,130};
    drawpoly(4,points18);
    setcolor(YELLOW);
    line(300,230,360,230);
    line(360,230,360,280);
    line(360,280,300,230);
    line(300,230,240,230);
    line(240,230,240,280);
    line(240,280,300,230);
    line(250,270,240,380);
    line(240,380,370,380);
    line(370,380,350,270);
    line(360,230,400,270);
    line(400,270,400,310);
    line(400,310,360,280);
}

void bandersnatchAttack()
{
    int r,s,t;
    for(r=0,s=0; r<=200; r=r+10,s=s+5)
    {
        setcolor(MAGENTA);
        circle(400+r,370+r,20+s);
        setfillstyle(SOLID_FILL, MAGENTA);
        floodfill(400+r,370+r,MAGENTA);
        delay(50);
        if(r==200)
            break;
        t=s;
    }
    delay(30);
    cleardevice();
    setcolor(YELLOW); //bandersnatchstart
    int points19[]= {400,350,370,300,440,300,400,350};
    drawpoly(4,points19);
    line(440,300,480,230);
    line(480,230,550,230);
    line(550,230,510,300);
    line(510,300,440,300);
    line(370,300,330,230);
    line(330,230,260,230);
    line(260,230,300,300);
    line(300,300,370,300);
    line(400,350,335,350);
    line(400,350,475,350);
    line(475,350,430,400);
    line(430,400,380,400);
    line(335,350,380,400);
    line(380,400,400,370);
    line(400,370,430,400);
    line(515,230,475,300);
    line(295,230,335,300);
    line(260,230,335,140);
    line(550,230,475,140);
    line(382,140,335,140);
    line(475,140,428,140);
    line(428,140,400,180);
    line(382,140,400,180);
    line(375,60,440,60);
    line(440,90,510,90);
    line(510,90,610,230);
    line(610,230,600,400);
    line( 550,430,550,300);
    line(540,430,540,320);
    line(500,450,500,350);
    line(310,450,310,350);
    line(270,430,270,320);
    line(280,430,280,320);
    line(310,90,375,90);
    line(310,90,210,230);
    line(210,230,220,400);
}

void losetextdragon()
{
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(150,310,"You won!");
    outtextxy(150,350,"You gained Dragonman's Flame thrower.");
    outtextxy(150,400,"Press any key to continue");
    getch();
    cleardevice();
}

void wintextdragon()
{
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,310,"Ohno! Dragonman wins!");
    outtextxy(150,350,"You gained -20 points.");
    outtextxy(150,400,"Press any key to continue");
    getch();
    cleardevice();
}

void losetextmagicanto()
{
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(150,310,"You won!");
    outtextxy(150,350,"You gained Magicanto's BLUE beam!");
    outtextxy(150,400,"Press any key to continue");
    getch();
    cleardevice();
}

void wintextmagicanto()
{
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,310,"Ohno! Magicanto wins!");
    outtextxy(150,350,"You gained -20 points.");
    outtextxy(150,400,"Press any key to continue");
    getch();
    cleardevice();
}

void losetextbandersnatch()
{
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(150,310,"You won!");
    outtextxy(150,350,"You gained Bandersnatch Wrath!");
    outtextxy(150,400,"Press any key to continue");
    getch();
    cleardevice();
}

void wintextbandersnatch()
{
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,310,"Ohno! Bandersnatch wins!");
    outtextxy(150,350,"You gained -20 points.");
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
    if(input==49)
    {
        cleardevice();
        goto again2;
    }
    else if(input==50)
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
    else if(input==51)
    {
        return 0;
    }
again2:  //femaleplayerface
    cleardevice();
    delay(200);
    setcolor(WHITE);
    line(570,600,640,600); //body
    line(640,600,660,700);
    arc(630,700,0,180,50);
    line(430,600,360,600);
    line(360,600,340,700);
    arc(370,700,0,180,50);
    circle(500,500,100);
    arc(450,480,0,180,20);
    arc(550,480,0,180,20);
    arc(500,500,0,180,10);
    setcolor(RED);
    circle(500,535,20);
    setfillstyle(SOLID_FILL, RED);
    floodfill(500,535,RED);
    setcolor(WHITE);
    arc(500,400,260,330,40);
    ellipse(500,550,90,220,110,180);
    ellipse(500,550,340,70,110,180);
    line(500,610,500,680); //femaleends

    setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(150,220, "This is Sayan Sama. The leader of the GOG(Guardian of the Galaxy). She was");
    outtextxy(150,240,"sent to Planet02 as the alarm was sent from here but found herself stuck here");
    outtextxy(150,260,"for 20 days. Guide her through the journey and keep her alive.");
    setcolor(RED);
    outtextxy(150,280,"Currently she has a sword. Help her to find more weapons and superpowers");
    outtextxy(150,300,"to gain power and safety.");
    getch();
    cleardevice();
    setcolor(BLUE);
    outtextxy(150,310,"She started his journey and encountered an old man.");
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

