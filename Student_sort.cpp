#include <iostream>

using namespace std;

int main() {
    // Declare an array to store marks of 5 students
    double marks[5];
    
    // 1. Input marks from the user
    cout << "Enter the marks of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
    }
    
    // 2. Arrange marks in descending order using Bubble Sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            // Swap if the current element is smaller than the next element
            if (marks[j] < marks[j + 1]) {
                double temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    
    // 3. Display the sorted marks
    cout << "\nMarks of students from Highest to Lowest:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Rank " << (i + 1) << ": " << marks[i] << endl;
    }
    
    return 0;
}
