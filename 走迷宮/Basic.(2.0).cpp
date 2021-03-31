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
	//每次迴圈都用getch()去抓一次使用者輸入
	//然後判斷每一個字母所表示的方向
	//同時滿足下一格不會撞墻&&對應的英文字母才會對地圖進行改變
	while (true)
	{
		//一次輸入一個字母並不需要按enter
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
		//清理熒幕
		system("cls");
		for (int i = 0; i <= 7; i++)
			puts(map[i]);
		if (x == 6 && y == 11)
			break;
	}
	printf("you win!");
	return 0;
}
