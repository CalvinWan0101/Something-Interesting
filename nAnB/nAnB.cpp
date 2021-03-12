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
    }
    return 0;
}
