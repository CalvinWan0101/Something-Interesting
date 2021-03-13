//範圍為0~9999億的數字轉國字小程式
#include <iostream>
#include <string>
using namespace std;
void output(int n)
{
    string chinese[10] = {"零", "壹", "貳", "參", "肆", "伍", "陸", "柒", "捌", "玖"};
    //0~999
    //1000~9999
    if (n >= 1000)
    {
        //印出千位
        cout << chinese[n / 1000] << "仟";
        //當百位!=0印出百位數
        if ((n % 1000) / 100 != 0)
            cout << chinese[(n % 1000) / 100] << "佰";
        //當百位=0且十位!=0印出零
        else if (((n % 1000) / 100 == 0 && ((n % 1000) % 100) / 10 != 0))
            cout << "零";
        //百位!=0印出十位數1
        if (((n % 1000) % 100) / 10 != 0)
            cout << chinese[((n % 1000) % 100) / 10] << "拾";
        //百位數!=0且百位=0印出零
        else if (((n % 1000) / 100 != 0 && ((n % 1000) % 100) / 10 == 0))
            cout << "零";
        //當千位,百位,個位同時!=0時，千位,百位兩者以零表示
        if (((n % 1000) / 100 == 0 && ((n % 1000) % 100) / 10 == 0) && (((n % 1000) % 100) % 10) != 0)
            cout << "零";
        //當個位!=0時印出個位數
        if (((n % 1000) % 100) % 10 != 0)
            cout << chinese[((n % 1000) % 100) % 10];
    }
    //100~999
    else if (n >= 100)
    {
        cout << chinese[n / 100] << "佰";
        if (n % 100 > 10 && n != 100)
            cout << chinese[(n % 100) / 10] << "拾";
        else if (n % 100 < 10 && n != 100)
            cout << "零";
        if (n != 100)
            cout << chinese[(n % 100) % 10] << endl;
    }
    //10~99
    else if (n >= 10)
    {
        cout << chinese[n / 10] << "拾";
        if (n % 10 != 0)
            cout << chinese[n % 10];
    }
    //0~9
    else if (n >= 0)
        cout << chinese[n] << endl;
}
int main()
{
    int yi, wan, ge;
    int input;
    while (true)
    {
        cout << "轉換前：";
        cin >> input;
        cout << "轉換後：";
        if (input >= 100000000)
        {
            yi = input / 100000000;
            wan = (input % 100000000) / 10000;
            ge = (input % 100000000) % 10000;
            output(yi);
            cout << "億";
            output(wan);
            cout << "萬";
            output(ge);
        }
        else if (input >= 10000)
        {
            wan = input / 10000;
            ge = input % 10000;
            output(wan);
            cout << "萬";
            output(ge);
        }
        else if (input >= 0)
            output(input);
        cout << endl;
    }
    return 0;
}
