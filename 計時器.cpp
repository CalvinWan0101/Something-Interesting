#include <iostream>
#include<iomanip>
#include<ctime>
using namespace std;
int main(int argc, char** argv)
{
	cout.setf(ios::fixed | ios::right);
	cout.fill('0');
	//使用者直接輸入當前時間
	int a, b, c;
	cout << "請分別輸入當前的小時數，分鐘數，秒數" << endl;
	cin >> a >> b >> c;
	while (true)
	{
		for (int hr = a; hr < 24; hr++)
		{
			for (int min = b; min < 59; min++)
			{
				for (int sec = c; sec < 59; sec++)
				{
					cout << setw(2) << hr << ':' << setw(2) <<min<< ':' << setw(2) << sec << ' ';
					cout << '\r';
					unsigned int StartTime = time(NULL) + 1;
					while (time(0) < StartTime);
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}