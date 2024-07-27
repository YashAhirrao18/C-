// finding the minimun and maximum element in the array
#include <iostream>
using namespace std;
int getMax(int arr[], int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        
        if (arr[i]>max) {
            max=arr[i];
        }

        }
        return max;



}
int getMin(int arr[], int size){
     int min=INT_MAX;
    for(int i=0;i<size;i++){
        
        if (arr[i]<min) {
            min=arr[i];
        }

        }
        return min;

}


int main(){
    int n;
    cout<<"Enter number od elements to enter in array\n";
    cin>>n;
    int arr[1000];
   // never do this => int arr[n]
   for (int i=0;i<n;i++){
    cin>> arr[i];
     }
   int max=getMax(arr,n);
   int min=getMin(arr,n);
   cout<<"Maximum element\n"<<max<<"\nMinimun element"<<min;
}