#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int numSemesters;
    cout << "Enter number of semesters: ";
    cin >> numSemesters;
    
    vector<int> maxMarks(numSemesters);

    for (int i = 0; i < numSemesters; ++i) {
        int numSubjects;
        cout << "Enter number of subjects in semester " << i + 1 << ": ";
        cin >> numSubjects;

        int maxMark = -1;
        for (int j = 0; j < numSubjects; ++j) {
            int mark;
            cout << "Enter mark obtained in subject " << j + 1 << ": ";
            cin >> mark;

            if (mark < 0 || mark > 100) {
                cout << "You have entered an invalid mark" << endl;
                return 1;
            }

            if (mark > maxMark) {
                maxMark = mark;
            }
        }
        maxMarks[i] = maxMark;
    }

    for (int i = 0; i < numSemesters; ++i) {
        cout << "Maximum mark in semester " << i + 1 << ": " << maxMarks[i] << endl;
    }

    return 0;
}
