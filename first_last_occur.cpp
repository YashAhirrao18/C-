#include <iostream>
using namespace std;

// Function to find the first occurrence of a key in a sorted array
int firstOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1, mid;
    int result = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            result = mid;
            end = mid - 1; // Search in the left half
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

// Function to find the last occurrence of a key in a sorted array
int lastOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1, mid;
    int result = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            result = mid;
            start = mid + 1; // Search in the right half
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int key = 2;
    int n = sizeof(arr) / sizeof(int);

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if (first != -1) {
        cout << "First occurrence of " << key << " is at index " << first << endl;
        cout << "Last occurrence of " << key << " is at index " << last << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}
