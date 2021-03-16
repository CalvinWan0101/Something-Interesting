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
struct point
{
    int x, y, step;
};
int main()
{
    struct point A[2500];
    //右下左上順時針
    int way[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int head, tail, bx, by;
    bool know;
    //佇列初始化
    head = tail = 1;
    //灌入起點資料
    A[head].x = 1;
    A[head].y = 1;
    A[head].step = 1;
    tail++;
    bucket[1][1] = 1;
    //know==0尚未到達
    //know==1到達終點
    know = 0;
    while (true)
    {
        Sleep(1000);
        if (tail <= head)
            break;
        //嘗試走四個方向
        for (int i = 0; i < 4; i++)
        {
            bx = A[head].x + way[i][1];
            by = A[head].y + way[i][0];
            //看有沒有超界或撞墻
            if (map[by][bx] == '#')
                continue;
            //確定該點可以落腳&&沒有使用過
            if (map[by][bx] == ' ' && bucket[by][bx] == 0)
            {
                map[by][bx] = 'O';
                map[by][bx] = 'O';
                system("cls");
                for (int i = 0; i <= 7; i++)
                    puts(map[i]);
                bucket[by][bx] = 1;
                A[tail].y = by;
                A[tail].x = bx;
                //每個輪迴的tail都是head的兒子
                //兒子腳步=父親腳步+1
                A[tail].step = A[head].step + 1;
                tail++;
            }
            //如果到目標點就break掉嘗試4個方向的迴圈
            if (bx == 6 && by == 11)
            {
                know = 1;
                break;
            }
        }
        //已經到達終點就跳出endless loop
        if (know == 1)
            break;
        else
            head++;
    }
    return 0;
}
