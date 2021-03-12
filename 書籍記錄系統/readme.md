先建立一個struct作為每本書資料輸入的模板
```c++
struct book
{
    string name, author, ISBM, year;
    double price;
};
```
然後建立book形態的陣列 booklist
```c++
book booklist[10000];
```
輸入書本的總數量
```c++
cout << "Books Number : ";
    cin >> n;
```
依序輸入每一本書的資料
 ```c++
 for (int i = 0; i < n; i++)
    {
        cout << "BOOK " << i + 1 << endl;
        cout << "Name : ";
        cin >> booklist[i].name;
        cout << "Author : ";
        cin >> booklist[i].author;
        cout << "ISBM : ";
        cin >> booklist[i].ISBM;
        cout << "Price : ";
        cin >> booklist[i].price;
        cout << "Date : ";
        cin >> booklist[i].year;
        cout << endl;
    }
```
輸出,每項數據都默認setw(12)來放，left表示靠左，依"|"來分隔
```c++
cout << left << setw(12) << "Name"
         << "| "
         << left << setw(12) << "Author"
         << "| "
         << left << setw(12) << "ISBM"
         << "| "
         << left << setw(12) << fixed << setprecision(2) << "Price"
         << "| "
         << left << setw(12) << "Year" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left << setw(12) << booklist[i].name << "| "
             << left << setw(12) << booklist[i].author << "| "
             << left << setw(12) << booklist[i].ISBM << "| "
             << left << setw(12) << fixed << setprecision(3) << booklist[i].price << "| "
             << left << setw(12) << booklist[i].year << endl;
    }
```
完整程式碼
```c++
#include <iostream>
#include <iomanip>
using namespace std;
struct book
{
    string name, author, ISBM, year;
    double price;
};
book booklist[10000];
int main()
{
    int n;
    cout << "Books Number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "BOOK " << i + 1 << endl;
        cout << "Name : ";
        cin >> booklist[i].name;
        cout << "Author : ";
        cin >> booklist[i].author;
        cout << "ISBM : ";
        cin >> booklist[i].ISBM;
        cout << "Price : ";
        cin >> booklist[i].price;
        cout << "Date : ";
        cin >> booklist[i].year;
        cout << endl;
    }
    cout << left << setw(12) << "Name"
         << "| "
         << left << setw(12) << "Author"
         << "| "
         << left << setw(12) << "ISBM"
         << "| "
         << left << setw(12) << fixed << setprecision(2) << "Price"
         << "| "
         << left << setw(12) << "Year" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left << setw(12) << booklist[i].name << "| "
             << left << setw(12) << booklist[i].author << "| "
             << left << setw(12) << booklist[i].ISBM << "| "
             << left << setw(12) << fixed << setprecision(3) << booklist[i].price << "| "
             << left << setw(12) << booklist[i].year << endl;
    }
    return 0;
}
```
