#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;


void findMinAndMax(int arr[], int size, int &min, int &max) {
    min = INT_MAX;
    max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int array[100];
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter the elements of array :";
    for(int i=0;i <n ;i++){
        cin>>array[i];
    }
    int min, max;

    findMinAndMax(array, n, min, max);
    cout<<"Max Element is"<<max<<"\n";
    cout<<"Min Element is"<<min<<"\n";


    

    return 0;
}
