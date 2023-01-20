#include <iostream>
#include <windows.h>
using namespace std;
void maze();

void gotoxy(int x, int y);
void printPacman(int x, int y);
void erase(int x, int y);
char getCharATxy(int x, int y);
main()
{
  int x = 2;
  int y = 2;
  

  bool gamerunning = true;

  system("cls");

  maze();
  while (gamerunning)
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
      char next = getCharATxy(x- 1, y);
      if (next == ' ')
      {
        erase(x, y);
        x = x - 1;
        printPacman(x, y);
      }
    }

     if (GetAsyncKeyState(VK_RIGHT))
    {
      char next = getCharATxy(x+1, y);
      if (next == ' ')
      {
        erase(x, y);
        x = x+ 1;
        printPacman(x, y);
      }
    }

     if (GetAsyncKeyState(VK_UP))
    {
      char next =getCharATxy(x, y-1);
      if (next == ' ')
      {
        erase(x, y);
        y = y - 1;
         printPacman(x, y);
      }
    }

     if (GetAsyncKeyState(VK_DOWN))
    {
      char next = getCharATxy(x,y + 1);
      if (next == ' ')
      {
        erase(x, y);
        y = y + 1;
        printPacman(x, y);
      }
    }

    if (GetAsyncKeyState(VK_ESCAPE)){
      gamerunning = false;

    }
    Sleep(200);

  }
}

void maze()
{
  cout << " ###############    " << endl;
  cout << " #             #  " << endl;
  cout << " #             #  " << endl;
  cout << " #             #  " << endl;
  cout << " #             #  " << endl;
  cout << " #             #  " << endl;
  cout << " #             #  " << endl;
  cout << " #             #  " << endl;
  cout << " #             #  " << endl;
  cout << " ###############  " << endl;
}

void gotoxy(int x, int y)
{
  COORD coordinate;
  coordinate.X = x;
  coordinate.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void erase(int x, int y)
{
  gotoxy(x, y);
  cout << " ";
}

void  printPacman(int x,int y)
{
  gotoxy( x, y);
  cout << "P";
}



char getCharATxy( short int x,  short int y){

  CHAR_INFO ci;
  COORD xy={0,0};
  SMALL_RECT rect ={ x ,y,x, y };
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize,xy,&rect)
  ?ci.Char.AsciiChar : ' ';

}
