#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int x, y;
    string a;
    srand(time(NULL));
    while (true)
    {
        x = rand() % (3 - 1 + 1) + 1;
        //rock, paper, scissors
        cout << endl
             << "Input Rock,Paper or Scissors" << endl;
        cout << "Your choice : ";
        cin >> a;
        if (a == "Rock")
            y = 1;
        else if (a == "Paper")
            y = 2;
        else if (a == "Scissors")
            y = 3;
        else
        {
            cout << "Error Input" << endl;
            continue;
        }
        cout << "Computer : ";
        switch (x)
        {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
        }
        if (x == y)
            cout << "It's a tie." << endl;
        else if (x == 1 && y == 2 || x == 2 && y == 3 || x == 3 && y == 2)
            cout << "You win" << endl;
        else
            cout << "You lose" << endl;
        cout << endl
             << "A NEW GAME?(PRESS Y OR N) : ";
        cin >> a;
        if (a == "N")
            break;
    }
    return 0;
}
