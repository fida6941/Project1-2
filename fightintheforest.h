int input;

allsnitchattatck()
{
    setcolor(RED);
    int x;
    for(x=0; x<=150; x=x+10)
    {
        line(350-x,160+x,330-x,180+x);
        delay(10);
        if(x==150)
            break;
    }
    int y;
    for(y=0; y<=150; y=y+10)
    {
        line(350-y,360+y,330-y,380+y);
        delay(10);
        if(y==150)
            break;
    }

    int z;
    for(z=0; z<=150; z=z+10)
    {
        line(650-z,260+z,630-z,280+z);
        delay(10);
        if(z==150)
            break;
    }

    int o;
    for(o=0; o<=150; o=o+10)
    {
        line(850-o,160+o,830-o,180+o);
        delay(10);
        if(o==150)
            break;
    }

    int g;
    for(g=0; g<=150; g=g+10)
    {
        line(850-g,360+g,830-g,380+g);
        delay(10);
        if(g==150)
            break;
    }
}

void allsnitchbody()
{
    setcolor(YELLOW); //1st snitch
    circle(300,250,50);
    line(300,250,380,200);
    line(300,250,220,200);
    line(380,200,400,240);
    line(400,240,320,250);
    line(220,200,200,240);
    line(200,240,280,250);
    delay(300); //1st snitch end

    setcolor(YELLOW); //2nd snitch
    circle(300,450,50);
    line(300,450,380,400);
    line(300,450,220,400);
    line(380,400,400,440);
    line(400,440,320,450);
    line(220,400,200,440);
    line(200,440,280,450);
    delay(300); //2nd snitch end

    setcolor(YELLOW); //3rd snitch
    circle(600,350,50);
    line(600,350,680,300);
    line(600,350,520,300);
    line(680,300,700,340);
    line(700,340,620,350);
    line(520,300,500,340);
    line(500,340,580,350);
    delay(300); //3rd snitch end

    setcolor(YELLOW); //4rdsnitch
    circle(800,250,50);
    line(800,250,880,200);
    line(800,250,720,200);
    line(880,200,900,240);
    line(900,240,820,250);
    line(720,200,700,240);
    line(700,240,780,250);
    delay(300); //4rd snitch end

    setcolor(YELLOW); //5th snitch
    circle(800,450,50);
    line(800,450,880,400);
    line(800,450,720,400);
    line(880,400,900,440);
    line(900,440,820,450);
    line(720,400,700,440);
    line(700,440,780,450);
    delay(300); //5th snitch end
}

void earngems()
{
    setcolor(YELLOW);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(200,300,"You've killed all the snitches");
    delay(500);
    outtextxy(200,400,"And saved the villagers.");
    delay(500);
    outtextxy(200,500,"You get 25 gems.");
    delay(500);
    outtextxy(200,700,"Press any key to continue.");
    getch();
    cleardevice();
}
void firstsnitchbody()
{
    setcolor(YELLOW); //1st snitch
    circle(300,250,50);
    line(300,250,380,200);
    line(300,250,220,200);
    line(380,200,400,240);
    line(400,240,320,250);
    line(220,200,200,240);
    line(200,240,280,250);
    delay(300); //1st snitch end

}
void firstsnitchattack()
{
    setcolor(YELLOW); //1st snitch
    circle(300,250,50);
    line(300,250,380,200);
    line(300,250,220,200);
    line(380,200,400,240);
    line(400,240,320,250);
    line(220,200,200,240);
    line(200,240,280,250);
    delay(300); //1st snitch end
    //1staniicthattack

    int x;
    for(x=0; x<=150; x=x+10)
    {
        line(350-x,160+x,330-x,180+x);
        delay(10);
        if(x==150)
            break;
    }
}
void secondsnitchbody()
{
    setcolor(YELLOW); //2nd snitch
    circle(300,450,50);
    line(300,450,380,400);
    line(300,450,220,400);
    line(380,400,400,440);
    line(400,440,320,450);
    line(220,400,200,440);
    line(200,440,280,450);
    //2nd snitch end}
}
void secondsnitchattack()
{
    setcolor(YELLOW); //2nd snitch
    circle(300,450,50);
    line(300,450,380,400);
    line(300,450,220,400);
    line(380,400,400,440);
    line(400,440,320,450);
    line(220,400,200,440);
    line(200,440,280,450);
    delay(300); //2nd snitch end
    //2ndaniicthattack

    int y;
    for(y=0; y<=150; y=y+10)
    {
        line(350-y,360+y,330-y,380+y);
        delay(10);
        if(y==150)
            break;
    }
}
void thirdsnitchbody()
{
    setcolor(YELLOW); //3rd snitch
    circle(600,350,50);
    line(600,350,680,300);
    line(600,350,520,300);
    line(680,300,700,340);
    line(700,340,620,350);
    line(520,300,500,340);
    line(500,340,580,350);
}
void thirdsnitchattack()
{
    setcolor(YELLOW); //3rd snitch
    circle(600,350,50);
    line(600,350,680,300);
    line(600,350,520,300);
    line(680,300,700,340);
    line(700,340,620,350);
    line(520,300,500,340);
    line(500,340,580,350);
    delay(300); //3rd snitch end
    //3rdaniicthattack

    int z;
    for(z=0; z<=150; z=z+10)
    {
        line(650-z,260+z,630-z,280+z);
        delay(10);
        if(z==150)
            break;
    }
}
void fourthsnitchbody()
{
    setcolor(YELLOW); //4rdsnitch
    circle(800,250,50);
    line(800,250,880,200);
    line(800,250,720,200);
    line(880,200,900,240);
    line(900,240,820,250);
    line(720,200,700,240);
    line(700,240,780,250);
    delay(300);
    //4th snitch end}
}
void fourthsnitchattack()
{
    setcolor(YELLOW); //4rdsnitch
    circle(800,250,50);
    line(800,250,880,200);
    line(800,250,720,200);
    line(880,200,900,240);
    line(900,240,820,250);
    line(720,200,700,240);
    line(700,240,780,250);
    delay(300); //4rd snitch end
    //1staniicthattack

    int o;
    for(o=0; o<=150; o=o+10)
    {
        line(850-o,160+o,830-o,180+o);
        delay(10);
        if(o==150)
            break;
    }
}
void fifthsnitchbody()
{
    setcolor(YELLOW); //5th snitch
    circle(800,450,50);
    line(800,450,880,400);
    line(800,450,720,400);
    line(880,400,900,440);
    line(900,440,820,450);
    line(720,400,700,440);
    line(700,440,780,450);
    delay(300); //5th snitch end
}
void fifthsnitchattack()
{
    setcolor(YELLOW); //5th snitch
    circle(800,450,50);
    line(800,450,880,400);
    line(800,450,720,400);
    line(880,400,900,440);
    line(900,440,820,450);
    line(720,400,700,440);
    line(700,440,780,450);
    delay(300); //5th snitch end
    //5thsnitchattack

    int g;
    for(g=0; g<=150; g=g+10)
    {
        line(850-g,360+g,830-g,380+g);
        delay(10);
        if(g==150)
            break;
    }
}
void attacktext()
{
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(400,620,"Press enter to attack");
}
void weaponchoice1()
{
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(400,620,"1. Sword");
}
void weaponchoice2()
{
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(400,570,"Choose your weapon");
    outtextxy(400,620,"1. Sword 2. Flame Thrower");
}
void attacksnitches()
{
    firstsnitchbody();
    attacktext();
    getch();
    firstsnitchattack();
    secondsnitchbody();
    getch();
    secondsnitchattack();
    thirdsnitchbody();
    getch();
    thirdsnitchattack();
    fourthsnitchbody();
    getch();
    fourthsnitchattack();
    fifthsnitchbody();
    getch();
    fifthsnitchattack();
}
blowsnitches()
{
    allsnitchbody();
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(400,620,"Press enter to blow the snitches");
    getch();
    allsnitchattatck();
    delay(1000);
    cleardevice();

}
