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
int bucket[50][50] = {0};
void dfs(int y, int x, int step)
{
    //1s走一次
    Sleep(1000);
    int bx, by;
    //右上左下
    int way[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    if (x == 6 && y == 11)
        return;
    for (int i = 0; i < 4; i++)
    {
        bx = x + way[i][1];
        by = y + way[i][0];
        if (map[by][bx] == '#')
            continue;
        if (bucket[by][bx] == 0 && map[by][bx] == ' ')
        {
            bucket[by][bx] = 1;
            map[y][x] = 'O';
            map[by][bx] = 'O';
            system("cls");
            for (int i = 0; i <= 7; i++)
                puts(map[i]);
            dfs(by, bx, step + 1);
            bucket[by][bx] = 0;
            map[y][x] = 'O';
            map[by][bx] = ' ';
            system("cls");
            for (int i = 0; i <= 7; i++)
                puts(map[i]);
        }
    }
}
int main()
{
    bucket[1][1] = 1;
    dfs(1, 1, 1);
    return 0;
}
