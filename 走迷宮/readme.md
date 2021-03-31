## 使用getch()走固定ASCII迷宮

### 檔案說明

Basic(1.0)是使用cout,endl來印出地圖，但是好像印的不夠快會有肉眼可見的閃屏，Basic(2.0)使用puts跟printf就不會有閃屏了。

- [Basic(1.0)](https://github.com/CalvinWan0101/Interesting/blob/master/%E8%B5%B0%E8%BF%B7%E5%AE%AE/Basic(1.0).cpp)
- [Basic(2.0)](https://github.com/CalvinWan0101/Interesting/blob/master/%E8%B5%B0%E8%BF%B7%E5%AE%AE/Basic(2.0).cpp)

### 程式碼解釋
- `#include <cstdio>`    使用puts(),printf
- `#include <windows.h>` 使用system("cls")
- `#include <conio.h>`   使用getch()

先預定好要走的迷宮，此程式只有"走迷宮"，"生成迷宮"會難很多。
```c++
char map[50][50] = {"############",
                    "#O#    #   #",
                    "#   ## # # #",
                    "#####    # #",
                    "#     #### #",
                    "# #####  # #",
                    "#       ##  ",
                    "############"};
```
出發點是坐標(y,x) == (1,1),input為玩家操控(W,A,S,D)所輸入的指令
```c++
int x = 1, y = 1;
    char input;
```
印出第0行到第7行
```c++
for (int i = 0; i <= 7; i++)
        puts(map[i]);
```
每次都使用getch()輸入input,根據輸入的字母去相對應做出上下左右的地圖更動。每次更動完都使用system("cls")來清理熒幕，然後再重新印出來。當 x==6 && y==11(終點坐標)便break掉迴圈表示已達終點。
```c++
while (true)
    {
        //input no enter
        input = getch();
        //down
        if ((input == 's' || input == 'S') && map[x + 1][y] == ' ')
		{
			map[x][y] = ' ';
			x++;
			map[x][y] = 'O';
		}
		//up
		else if ((input == 'w' || input == 'W') && map[x - 1][y] == ' ')
		{
			map[x][y] = ' ';
			x--;
			map[x][y] = 'O';
		}
		//left
		else if ((input == 'a' || input == 'A') && map[x][y - 1] == ' ')
		{
			map[x][y] = ' ';
			y--;
			map[x][y] = 'O';
		}
		//right
		else if ((input == 'd' || input == 'D') && map[x][y + 1] == ' ')
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
```
印出you win
```c++
printf("you win!");
```

之前在ZeroJudge有寫過一題用DFS,BFS去解迷宮最佳解的題目，想嘗試使用印出地圖來看看他嘗試的路徑(可以看看：P)
- [題目鏈接](https://zerojudge.tw/ShowProblem?problemid=a982)
- [解題報告](https://github.com/CalvinWan0101/ZeroJudge/tree/main/Basic/a982-%E8%BF%B7%E5%AE%AE%E5%95%8F%E9%A1%8C)
- [Map_DFS](https://github.com/CalvinWan0101/Interesting/blob/master/%E8%B5%B0%E8%BF%B7%E5%AE%AE/Map_DFS.cpp)
- [Map_BFS](https://github.com/CalvinWan0101/Interesting/blob/master/%E8%B5%B0%E8%BF%B7%E5%AE%AE/Map_BFS.cpp)
