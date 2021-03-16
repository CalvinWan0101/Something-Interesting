#include <iostream>
#include <windows.h>
#include <conio.h>
char a[50][50] = {"############",
                  "#O#    #   #",
                  "#   ## # # #",
                  "#####    # #",
                  "#     #### #",
                  "# #####  # #",
                  "#       ##  ",
                  "############"};
using namespace std;
int main()
{
    int x = 1, y = 1;
    char input;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <= 11; j++)
            cout << a[i][j];
        cout << endl;
    }
    while (true)
    {
        //input no enter
        input = getch();
        //down
        if (input == 's' && a[x + 1][y] == ' ')
        {
            a[x][y] = ' ';
            x++;
            a[x][y] = 'O';
        }
        //up
        else if (input == 'w' && a[x - 1][y] == ' ')
        {
            a[x][y] = ' ';
            x--;
            a[x][y] = 'O';
        }
        //left
        else if (input == 'a' && a[x][y - 1] == ' ')
        {
            a[x][y] = ' ';
            y--;
            a[x][y] = 'O';
        }
        //right
        else if (input == 'd' && a[x][y + 1] == ' ')
        {
            a[x][y] = ' ';
            y++;
            a[x][y] = 'O';
        }
        //clear screen
        system("cls");
        for (int i = 0; i <= 7; i++)
        {
            for (int j = 0; j <= 11; j++)
                cout << a[i][j];
            cout << endl;
        }
        if (x == 6 && y == 11)
            break;
    }
    cout << "you win!" << endl;
    return 0;
}
