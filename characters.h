void malePlayerStory()

{
    cleardevice();
    setcolor(WHITE);
    circle(500,500,100);
    arc(450,480,0,180,20);
    arc(550,480,0,180,20);
    arc(500,500,0,180,10);
    ellipse(500,600,100,250,50,80);
    ellipse(500,600,290,80,50,80);
    ellipse(500,600,120,240,40,80);
    ellipse(500,600,130,230,30,80);
    ellipse(500,600,120,230,10,80);
    ellipse(500,600,280,90,40,80);
    ellipse(500,600,260,60,30,80);
    ellipse(500,600,240,60,10,80);
    arc(500,400,210,330,40);
    line(570,600,640,600); //body
    line(640,600,660,700);
    arc(630,700,0,180,50);
    line(430,600,360,600);
    line(360,600,340,700);
    arc(370,700,0,180,50);
    delay(200);

    setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(150,250, "This is Sayan Sama. The leader of the GOG(Guardian of the Galaxy). He was");
    outtextxy(150,270,"sent to Planet02 as the alarm was sent from here but found himself stuck here");
    outtextxy(150,290,"for 20 days. Guide him through the journey and keep him alive.");
    setcolor(RED);
    outtextxy(150,320,"Currently he has a sword. Help him to find more weapons and superpowers");
    outtextxy(150,340,"to gain power and safety.");
    getch();
    cleardevice();
}


void femalePlayerStory()

{
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
