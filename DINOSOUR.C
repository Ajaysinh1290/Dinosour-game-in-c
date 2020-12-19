 #include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
int x=60,y=15,A,j,jump=0,score=0,speed=90,color=1,t,C;
void dinosour()
{
    textcolor(15);
   window(2,y,20,y+1);
   cprintf("           ÜÛßÛÛÛÜÜ     ");
     window(2,y+1,20,y+2);
   cprintf("           ÛÛÛÛßßßß        ");
     window(2,y+2,20,y+3);
   cprintf("           ÛÛÛÛÛßß       ");
     window(2,y+3,20,y+4);
   cprintf(" Û        ÛÛÛÛÛ");
     window(2,y+4,20,y+5);
   cprintf(" ÛÛÜ    ÜÛÛÛÛÛÛßÛ");
     window(2,y+5,20,y+6);
   cprintf("  ÛÛÛÛÛÛÛÛÛÛÛÛ  ß");
     window(2,y+6,20,y+7);
   cprintf("  ßÛÛÛÛÛÛÛÛßß");
   if(jump==2)
   {
     window(2,y+7,20,y+8);
   cprintf("    ÛÛßÛÛ");
     window(2,y+8,20,y+9);
   cprintf("    ÛÜ  ÛÜ");
   }
   else if(jump==0)
   {
	window(2,y+7,20,y+8);
   cprintf("    ÛßßÛÜ");
     window(2,y+8,20,y+9);
   cprintf("    ÛÜ ");
   jump=1;
   }
   else if(jump==1)
   {
	window(2,y+7,20,y+8);
   cprintf("   ÛÛßßÛ");
     window(2,y+8,20,y+9);
   cprintf("    ßß ÛÜ ");
   jump=0;
   }




}
void Score()
{
   int d=5;
   textcolor(3);
   window(60,d,80,d+1);
   cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    window(60,d+1,80,d+2);
   cprintf("³                ³");

   window(60,d+2,80,d+3);
   cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
   window(63,d+1,80,d+2);
   cprintf("SCORE = %d",score);
   d=8;
    window(60,d,80,d+1);
   cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    window(60,d+1,80,d+2);
   cprintf("³                ³");

   window(60,d+2,80,d+3);
   cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
   window(62,d+1,80,d+2);
   cprintf("QUIT = ESC KEY");

   d=2;
   textcolor(3);
   window(60,d,80,d+1);
   cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    window(60,d+1,80,d+2);
   cprintf("³                ³");

   window(60,d+2,80,d+3);
   cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
   window(62,d+1,80,d+2);
   cprintf("Jump = Space");
}
int i;
void obj()
{
    textcolor(color);
   window(x,20,x+15,21);
   cprintf("Û Û Ü");
   window(x,21,x+15,22);
   cprintf("ÛÜÛÜÛ");
   window(x,22,x+15,23);
   cprintf("  Û ");
   window(x,23,x+15,24);
   cprintf("  Û");
    for(i=5; i<=80; i++)
    {
    textcolor(color);
     window(i,24,i+1,25);
     cprintf("ß");

    }
    textcolor(color);
  window(1,24,10,25);
  cprintf("ßßßß");
}
void main()

{
      textbackground(0);
     system("cls");
     Score();
     textcolor(7);
     score++;
     obj();

   dinosour();

    if(x<=8)
   {
    x=65;
     color++;
     if(color>15)
     {
     color=1;
     }
   }
   if(score%100==0)
   {
    speed-=10;
   }
   if(speed<=25)
   {
   speed=25;
   }
   if(kbhit())
   {
       A=getch();
       if(A==' ')
       {


       for(j=1; j<=4; j++)
       {
       system("cls");
       textcolor(7);
	  y-=2;
	   dinosour();
	jump=2;
	x--;
	obj();
	Score();
	score++;
	 if(score%100==0)
	 {
	speed-=10;
	if(speed<=25)
	{
      speed=25;
       }
	 }

	delay(speed-20);
       }

       for(j=1; j<=10; j++)
       {
       system("cls");
       textcolor(7);
	jump=2;
	y=7;

	dinosour();
	x--;


    if(x<=8)
   {
    x=65;
     color++;
     if(color>15)
     {
     color=1;
     }
   }
      if(x<=7)
     {
      x=65;
     }

	obj();
	Score();
	score++;
	 if(score%100==0)
	  {
	 speed-=10;
	  }

	delay(speed);
	 }

       for(j=1; j<=4; j++)
       {
       system("cls");
       textcolor(7);
	jump=2;
	y+=2;
	  if(x<=3)
	{
	x=65;
	}

	dinosour();
	x--;
	obj();
	Score();
       if(y==15 && x==19)
     {

      window(5,5,50,6);
      textcolor(2);
      cprintf("Game over      Press any key to play ");
      delay(100);
      x=75,score=0,speed=100;
      getch();
     }
	if(x<=8)
   {
    x=65;
     color++;
     if(color>15)
     {
     color=1;
     }
   }
      if(score%100==0)
   {
    speed-=15;
   }
   if(speed<25)
   {
   speed=25;
   }

	score++;
	delay(speed-20);
      }
      jump=0;
      }
      else if(A==27)
      {
       exit(0);
      }

   }
   if(!kbhit())
   {
     if(y==15 && x==19)
     {

      window(5,5,50,6);
      textcolor(14);
      cprintf("Game over   Press any key to play");
      delay(100);
      x=75,score=0,speed=100;
      C=getch();
      if(C==27)
      {
      exit(0);
      }
      else
      {
      main();
      }
     }
     x--;
     delay(speed);
     main();

   }



}