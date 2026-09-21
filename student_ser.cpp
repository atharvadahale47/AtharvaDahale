#include <iostream>
using namespace std;

int main() {
    // Declare an array to store the roll numbers of 5 students
    int rollNumbers[5];
    int searchRollNo;
    bool found = false;

    // 1. Input the roll numbers from the user
    cout << "Enter the roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> rollNumbers[i];
    }

    // 2. Input the roll number to search for
    cout << "\nEnter the roll number you want to search for: ";
    cin >> searchRollNo;

    // 3. Search the array for the roll number
    for (int i = 0; i < 5; i++) {
        if (rollNumbers[i] == searchRollNo) {
            found = true;
            break; // Stop searching once found
        }
    }

    // 4. Display the result
    if (found) {
        cout << "Student found" << endl;
    } else {
        cout << "Student not found" << endl;
   }

    return 0;
}

