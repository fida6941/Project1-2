interface1()
{
    int i,j=0,k;
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
}

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



interface2()
{
again1:
    setcolor(BLUE);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(150,300,"1. Play");
    outtextxy(150,400,"2. Manual");
    outtextxy(150,500, "3. Exit");
    int input;
    while(input != 1 && input != 2 && input != 3)
        input = getch() - '0';
    if(input==1)
    {
        cleardevice();
        settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
        outtextxy(200,90,"Whom do you want to play as?");
        circle(250,300,30);
        circle(850,300,30);
        rectangle(200,350,300,450);
        rectangle(800,350,900,450);
        rectangle(200,460,230,550);
        rectangle(270,460,300,550);
        int point[]= {800,450,770,500,930,500,900,450,800,450};
        drawpoly(5,point);
        rectangle(800,510,830,550);
        rectangle(870,510,900,550);
        setcolor(YELLOW);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(250,560,"(1)");
        outtextxy(850,560,"(2)");
        outtextxy(200,600,"Both of them are the bravest, most clever soldiers of GOG");

        outtextxy(200,620,"press 1 or 2");
        int choice;
        while(choice != 1 && choice != 2)
            choice = getch() - '0';
        if(choice == 1)
        {
            cleardevice();
            malePlayerStory();
        }
        else if(choice == 2)
        {
            cleardevice();
            femalePlayerStory();
        }

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
}

quizwintext()
{
    setcolor(BLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(150,310,"You answered correctly!");
    outtextxy(150,350,"You get 5 spears!");
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

int oldmanquiz()
{
    setcolor(BLUE);
    outtextxy(150,310,"You started your journey and encountered an old man.");
    outtextxy(150,350,"Do you want to approach him?");
    outtextxy(150,380,"1. YES   2. NO");
    int input;
    while(input != 1 && input != 2)
        input=getch();
    cleardevice();
    if(input==1)
    {
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

        char input2;
        int spear;
        while(input2 != 1 && input2 != 2 && input2 != 3 && input2 != 4)
            input2 = getch() - '0';
        cleardevice();
        int *ptr;
        if(input2 == 2)
        {

            quizwintext();
            return spear = 5;
        }
        else
        {
            quizlostquiz();
            return spear = 0;
        }

        cleardevice();

    }
    else
        cleardevice();
}

void friendgone()
{
    int h;
    for(h=0; h<=450; h=h+10)
    {
        setcolor(WHITE);
        circle(200+h,400,15);
        circle(150+h,470,15);
        delay(10);
        if(h==450)
            break;
        cleardevice();
        setcolor(GREEN);
        circle(700,20,50);
        circle(500,70,100);
        circle(300,40,70);
        circle(700,700,100);
        circle(500,700,50);
        circle(400,700,70);
    }
    delay(2000);
    h=0;
    settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
    outtextxy(800,300,"! !");
    delay(2000);
    for(h=0; h<=700; h=h+10)
    {
        setcolor(WHITE);
        circle(650,400,15);
        circle(600+h,470,15);
        delay(10);
        if(h==700)
            break;
        cleardevice();
        setcolor(GREEN);
        circle(700,20,50);
        circle(500,70,100);
        circle(300,40,70);
        circle(700,700,100);
        circle(500,700,50);
        circle(400,700,70);
    }
    delay(1000);
    cleardevice();
    setcolor(WHITE);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(150,100,"Your friend is nowhere to be seen!");
    delay(1000);
    outtextxy(150,200,"You go forward and see a gembox.");
    delay(1000);
    outtextxy(150,300,"BUT...");
    delay(1000);
    outtextxy(150,400,"As you proceed to get it,");
    delay(1000);
    outtextxy(150,500,"You encounter DRAGONMAN!");
    getch();
    cleardevice();
}

void friendlocation()
{
    setcolor(RED);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(100,200,"DRAGONMAN: So you chose to know your friends location.");
    delay(2000);
    outtextxy(100,300,"Magicanto has got your friend.");
    delay(2500);
    outtextxy(100,400,"You'll find him in the village.");
    delay(1000);
    outtextxy(100,700,"Press any key to continue further.");
    getch();
    cleardevice();
}

int dragonmanpuzzleright()
{
    int flamethrower;
    setcolor(RED);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(200,250,"DRAGONMAN: Your answer is correct.");
    delay(1000);
    outtextxy(200,300,"I give you 50 gems.");
    delay(1000);
    outtextxy(200,350,"I can also help you with one of these two things.");
    delay(1000);
    outtextxy(200,450,"1. Tell you where your friend is.");
    delay(1000);
    outtextxy(200,500,"2. Give you my flame thrower.");
    delay(1000);
    outtextxy(200,700,"Press 1/2 to choose what you get.");
    int input;
    while(input != 1 && input != 2)
        input = getch() - '0';
    if(input == 1)
    {
        cleardevice();
        friendlocation();
        return flamethrower = -1;
    }
    else if(input == 2){
        return flamethrower = 2;
        cleardevice();
        setcolor(YELLOW);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(250,250,"Now you have Dragonman's flame thrower!");
    delay(500);
    outtextxy(250,300,"You can use it twice");
    getch();
    cleardevice();
    }
}

void dragonmanpuzzlewrong()
{
    setcolor(RED);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(200,250,"DRAGONMAN: HA HA!! Your answer is wrong!");
    delay(1000);
    outtextxy(200,400,"Now you have no choice but to fight me!!!");
    delay(1000);
    outtextxy(200,700,"Press any key to start the fight.");
    getch();
    cleardevice();
}

int dragonmanpuzzle()
{
    int flamethrower;
    setcolor(RED);
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(200,250,"DRAGONMAN: I won't make you my friend unless..");
    delay(1000);
    outtextxy(200,350,"You answer this question correctly.");
    delay(1000);
    outtextxy(200,700,"Press any key to see the question.");
    getch();
    cleardevice();
    setcolor(WHITE);
    outtextxy(200,250,"A doctor gives you 3 pills");
    delay(1000);
    outtextxy(200,300,"telling you to take one every half hour.");
    delay(1000);
    outtextxy(200,350,"How many minutes will the pills last?");
    delay(500);
    outtextxy(300,450,"1. 20.");
    delay(500);
    outtextxy(300,500,"2. 40.");
    delay(500);
    outtextxy(300,550,"3. 60.");
    delay(500);
    outtextxy(300,600,"4. 80.");
    int input;
    while(input != 1 && input !=2 && input != 3 && input != 4)
        input = getch() - '0';
    if(input == 3)
    {
        cleardevice();
        return flamethrower = dragonmanpuzzleright();
    }
    else
    {
        cleardevice();
        dragonmanpuzzlewrong();
        return flamethrower = 0;
    }
}
