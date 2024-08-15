//Find pivot in rotated sorted array
#include<iostream>
using namespace std;

int findPivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid;
     // Handle case where the array is not rotated at all
    if (arr[start] < arr[end]) {
        return arr[0];
    }
    while (start<end){
        mid=start+ (end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;

        }
        else {
            if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1])
            return arr[mid];
            end=mid;
        }
    }
    return arr[start];

}
int main(){
    int arr[]={1, 2, 3, 4, 5};
    int size= sizeof(arr)/4;
    int x;
    x=findPivot(arr,size);
    cout<<x;

}