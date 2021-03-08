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
            cout << "Larger" << endl;
        else if (guess > answer)
            cout << "Smaller" << endl;
        else
        {
            cout << "You got the Answer ! The Answer is " << answer << endl;
            break;
        }
    }
    return 0;
}
