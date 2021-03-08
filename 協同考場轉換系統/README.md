## 前情提要
在疫情爆發前，協同中學就已經公佈小六新生測驗的准考證號碼
准考證號碼為4碼
如1233則代表 12號考場 座號33
如0132則代表  1號考場 座號32
原本一間考場安排36人，但由於疫情的緣故，一間考場只能安排24人
但是准考證號碼已經公佈
如何依靠輸入准考證號碼以得知新的考場以及座號？

V1是我剛學會寫程式寫的，V2是我最近寫的。那時候還沒有學會字串處理，只會傻傻的拿數字來做
```c++
//V2
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count, room, number;
    string a;
    while (true)
    {
        cout << "Input Your Id : ";
        cin >> a;
        room = (a[0] - 48) * 10 + a[1] - 48;
        number = (a[2] - 48) * 10 + a[3] - 48;
        //debug
        if (room > 99 || number > 36 || number < 1 || room < 1 || a.length() > 4)
        {
            cout << "Error, Please Input Again" << endl;
            continue;
        }
        count = (room - 1) * 36 + number;
        cout << "Examination Room : " << count / 24 + 1 << endl;
        cout << "Number : " << count % 24 << endl;
    }
    return 0;
}
```
