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
chooseSword()
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
    outtextxy(500,750,"1.Sword");
}


chooseSwordSpear()
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
    outtextxy(500,750,"1. Sword   2. Spear");
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

void fightoption()
{
    setcolor(WHITE);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(400,250,"What would you like to do?");
    outtextxy(450,350,"1. Fight.");
    outtextxy(450,400,"2. Run.");
    outtextxy(450,450,"3. Try to be his friend.");
}

playerattacksword()
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

    int w;
    for(w=0; w<=300; w=w+10)
    {
        line(460-w,90+w,440-w,110+w);
        //line(480-w,160+w,460-w,180+w);

        delay(10);
        if(w==300)
            break;
    }
    //playerend
    //delay(500);
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
