#include <iostream>
#include <windows.h>
using namespace std;
// void bill(string day,string fruit,float quantity);
void maze();
void gotoxy(int x, int y);
void clear(int x, int y,char previous);
char getCharAtxy(int x, int y);
void showGhost(int x, int y);
main()
{
    int gx = 1;
    int gy = 1;
    char space = ' ';
    system("cls");
    maze();
    while (true)
    {
        Sleep(100);
        string direction = "right";
        if (direction == "right")
        {
            char nextlocation = getCharAtxy(gx + 1, gy);
            if (nextlocation == '%')
            {
                direction = "left";
            }
            else if (nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx, gy, space);
                gx = gx - 1;
                space = nextlocation;
                showGhost(gx, gy);
            }
        }
        if (direction == "left")
        {
            char nextlocation = getCharAtxy(gx - 1, gy);
            if (nextlocation == '%')
            {
                direction = "right";
            }
            else if (nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx, gy, space);
                gx = gx - 1;
                space = nextlocation;
                showGhost(gx, gy);
            }
        }
    }
}

void maze()
{
    cout << "###############" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "##           ##" << endl;
    cout << "###############" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void clear(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void showGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
