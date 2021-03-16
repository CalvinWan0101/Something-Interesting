#include <cstdio>
#include <windows.h>
#include <conio.h>
char map[50][50] = {"############",
                    "#O#    #   #",
                    "#   ## # # #",
                    "#####    # #",
                    "#     #### #",
                    "# #####  # #",
                    "#       ##  ",
                    "############"};
int main()
{
    int x = 1, y = 1;
    char input;
    for (int i = 0; i <= 7; i++)
        puts(map[i]);
    while (true)
    {
        //input no enter
        input = getch();
        //down
        if (input == 's' && map[x + 1][y] == ' ')
        {
            map[x][y] = ' ';
            x++;
            map[x][y] = 'O';
        }
        //up
        else if (input == 'w' && map[x - 1][y] == ' ')
        {
            map[x][y] = ' ';
            x--;
            map[x][y] = 'O';
        }
        //left
        else if (input == 'a' && map[x][y - 1] == ' ')
        {
            map[x][y] = ' ';
            y--;
            map[x][y] = 'O';
        }
        //right
        else if (input == 'd' && map[x][y + 1] == ' ')
        {
            map[x][y] = ' ';
            y++;
            map[x][y] = 'O';
        }
        //clear screen
        system("cls");
        for (int i = 0; i <= 7; i++)
            puts(map[i]);
        if (x == 6 && y == 11)
            break;
    }
    printf("you win!");
    return 0;
}
