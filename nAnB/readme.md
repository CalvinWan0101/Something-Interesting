遊戲規則： 數字正確且位置正確為A，數字正確但位置不對為B

輸入正確答案四位數，並畫出分界線
```c++
cout << "Answer:";
    cin >> answer;
    for (int i = 0; i <= 20; i++)
        cout << "-";
    cout << endl;
```
無限迴圈一直輸入，直到4A0B才跳出
```c++
 while (true)
    {
        int a = 0, b = 0;
        cout << "Input :";
        cin >> input;
        for (int i = 0; i < answer.length(); i++)
            for (int j = 0; j < answer.length(); j++)
                if (answer[i] == input[j] && i != j)
                    b++;
                else if (answer[i] == input[j] && i == j)
                    a++;
        cout << a << "A" << b << "B" << endl;
        if (a == 4)
        {
            cout << "You got the correct answer." << endl;
            break;
        }
    }
```
完整程式碼
```c++
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string answer, input;
    cout << "Answer:";
    cin >> answer;
    for (int i = 0; i <= 20; i++)
        cout << "-";
    cout << endl;
    while (true)
    {
        int a = 0, b = 0;
        cout << "Input :";
        cin >> input;
        for (int i = 0; i < answer.length(); i++)
            for (int j = 0; j < answer.length(); j++)
                if (answer[i] == input[j] && i != j)
                    b++;
                else if (answer[i] == input[j] && i == j)
                    a++;
        cout << a << "A" << b << "B" << endl;
        if (a == 4)
        {
            cout << "You got the correct answer." << endl;
            break;
        }
    }
    return 0;
}
```
