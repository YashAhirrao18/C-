#include <iostream>
using namespace std;

void findMissingElements(int arr[], int size) {
    int expected = 0;
    cout << "Missing elements in the array: ";

    for (int i = 0; i < size; i++) {
        while (expected < arr[i]) {
            cout << expected << " ";
            expected++;
        }
        expected++;
    }
    
    // Handle case where the last elements are missing
    while (expected < size) {
        cout << expected << " ";
        expected++;
    }

    cout << endl;
}

int main() {
    int arr[100];
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findMissingElements(arr, size);

    return 0;
}
