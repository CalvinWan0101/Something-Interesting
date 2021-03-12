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
