//Difference of array
#include <iostream>
using namespace std;

void findDifference(int arr1[], int arr2[], int size1, int size2) {
    int i = 0, j = 0;

    cout << "Difference of the arrays (elements in arr1 but not in arr2): ";
    while (i < size1) {
        if (j >= size2 || arr1[i] < arr2[j]) {
            // Print element from arr1 if it's not in arr2
            if (i == 0 || arr1[i] != arr1[i - 1]) {
                cout << arr1[i] << " ";
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }
    cout << endl;
}

int main() {
    int arr1[100], arr2[100];
    int size1, size2;

    cout << "Enter size of array 1: ";
    cin >> size1;

    cout << "Enter size of array 2: ";
    cin >> size2;

    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    findDifference(arr1, arr2, size1, size2);

    return 0;
}
