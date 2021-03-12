使用者自訂產生亂數的範圍
```c++
srand(time(NULL));
    cout << "MIN = ";
    cin >> min;
    cout << "MAX = ";
    cin >> max;
    answer = rand() % (max - min + 1) + min;
```
無限迴圈一直猜，直到答案正確才會跳出。每次輸入猜測結果都會判斷與答案的大小關係並提示
```c++
 while (true)
    {
        cout << "Input Your Answer : ";
        cin >> guess;
        if (guess < answer)
            cout << "Smaller than the answer" << endl;
        else if (guess > answer)
            cout << "Bigger than the answer" << endl;
        else
        {
            cout << "You got the Answer ! The Answer is " << answer << endl;
            break;
        }
    }
```
完整程式碼
```c++
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    long long int answer, guess, min, max;
    srand(time(NULL));
    cout << "MIN = ";
    cin >> min;
    cout << "MAX = ";
    cin >> max;
    answer = rand() % (max - min + 1) + min;
    while (true)
    {
        cout << "Input Your Answer : ";
        cin >> guess;
        if (guess < answer)
            cout << "Smaller than the answer" << endl;
        else if (guess > answer)
            cout << "Bigger than the answer" << endl;
        else
        {
            cout << "You got the Answer ! The Answer is " << answer << endl;
            break;
        }
    }
    return 0;
}
```
