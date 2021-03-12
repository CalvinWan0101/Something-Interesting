#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
    cout.setf(ios::fixed | ios::right);
    cout.fill('0');
    while (true)
        for (int hr = 0; hr < 24; hr++)
            for (int min = 0; min < 59; min++)
                for (int sec = 0; sec < 59; sec++)
                {
                    cout << setw(2) << hr << ':' << setw(2) << min << ':' << setw(2) << sec << ' ';
                    cout << '\r';
                    unsigned int StartTime = time(NULL) + 1;
                    while (time(0) < StartTime);
                }
    return 0;
}
