#include <iostream>
#include <limits.h>
using namespace std;

void findSecondMax(int arr[], int size, int &max, int &sec_max) {
    
    max = INT_MIN;
    sec_max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            
            sec_max = max;
            max = arr[i];
        } else if (arr[i] > sec_max && arr[i] != max) {
           
            sec_max = arr[i];
        }
    }
}

int main(){
    int array[100];
    int n, max, sec_max;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    findSecondMax(array, n, max, sec_max);
    cout << "The second largest element is " << sec_max << "\n";

    return 0;
}
