

#include <iostream>
using namespace std;

int main()
{
    int roll[5];

    cout << "Enter roll numbers of 5 students:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> roll[i];
    }

    cout << "\nRoll numbers entered by the user are:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << roll[i] << endl;
    }

    return 0;
}



