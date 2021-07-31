#include <iostream>
#include <cstdio>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "console.h"

#define ConsoleHeight  25
#define ConsoleWidth  45
enum TrangThai {UP, DOWN, LEFT , RIGHT};
void TextColor (int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , color);
}
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;                  
	HANDLE	hConsoleOut;
	COORD	Home = {0,0};
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut,' ',csbiInfo.dwSize.X * csbiInfo.dwSize.Y,Home,&dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);
}
void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

struct ToaDo
{
    int x,y;	
};
struct HoaQua
{
	ToaDo td;
};

struct Snake
{
	ToaDo dot[31];
	int n;
	TrangThai tt;
};

void KhoiTao (Snake &snake , HoaQua &hq)
{
	snake.n = 1;
	snake.dot[0].x = 0;
	snake.dot[0].y = 0;
	snake.tt = RIGHT;
	hq.td.x=10;
	hq.td.y = 10;
	
}
void HienThi (Snake snake , HoaQua hq)
{
	clrscr();
	 TextColor(7);
	for(int i=0;i < ConsoleHeight;i++)
	{
		gotoXY(ConsoleWidth, i);
		putchar(179);
	}
	for(int i=0;i<ConsoleWidth;i++)
	{
		gotoXY(i,ConsoleHeight);
		putchar(196);
	}
	
	TextColor(14);
	gotoXY(hq.td.x,hq.td.y);
	putchar (001);
	TextColor(10);
	for(int i=0;i<snake.n;i++)
	{
		gotoXY(snake.dot[i].x , snake.dot[i].y);
		putchar (006);
	}
}

void DieuKhien (Snake &snake)
{
	for(int i= snake.n-1;i>0;--i)
	{
		snake.dot[i] = snake.dot[i-1];
	}
	if(kbhit())
	{
		char key = _getch();
		if(key == 'a' || key == 'A')
		{
			snake.tt = LEFT;
		}
		else if(key == 'd' || key == 'D')
		{
			snake.tt = RIGHT;
		}
		else if(key == 's' || key == 'S')
		{
			snake.tt = DOWN;
		}
		else if(key == 'w' || key == 'W')
		{
			snake.tt = UP;
		}
		
		if(snake.tt == UP)
		{
			snake.dot[0].y--;
		}
		else if(snake.tt == DOWN)
		{
			snake.dot[0].y++;
		}
		else if(snake.tt == LEFT)
		{
			snake.dot[0].x--;
		}
		else if(snake.tt == RIGHT)
		{
			snake.dot[0].x++;
		}
	}
}
int XuLy (Snake &snake,HoaQua &hq)
{
	if(snake.dot[0].x == hq.td.x && snake.dot[0].y == hq.td.y)
	{
		for(int i= snake.n;i>0;i--)
		snake.dot[i]=snake.dot[i-1];
		snake.n++;
		if(snake.tt == UP)
		{
			snake.dot[0].y--;
		}
		else if(snake.tt == DOWN)
		{
			snake.dot[0].y++;
		}
		else if(snake.tt == LEFT)
		{
			snake.dot[0].x--;
		}
		else if(snake.tt == RIGHT)
		{
			snake.dot[0].x++;
		}
		
		hq.td.x = rand()% ConsoleWidth;
		hq.td.y = rand()% ConsoleHeight;
	}
	
	if(snake.dot[0].x<0 || snake.dot[0].x>ConsoleWidth || snake.dot[0].y<0 || snake.dot[0].y>ConsoleHeight )
	{
		return -1;
	}
	
	for(int i=1;i<snake.n;i++)
		if(snake.dot[0].x == snake.dot[i].x
		 && snake.dot[0].y == snake.dot[i].y )
	    	return -1;	
	
}

int main(int argc, char** argv) {
	srand(time(NULL));
	Snake snake;
	HoaQua hq;
	KhoiTao (snake, hq);
	int ma=0;
	while(true)
	{
		// Hien Thi
		HienThi (snake, hq);
	   // DieuKhien
	   DieuKhien (snake);
	   //  XuLy
	   ma=XuLy (snake,hq);
	  // KetQua
	  if(ma==-1)
	  {
	  	gotoXY(ConsoleWidth+1,10);
	  	printf("Game Over");
	  	while(_getch() != 13) ;
	  	break;
	  }
	  Sleep(200);
	}
	return 0;
}
