// Find the peak index in mountain array
#include<iostream>
using namespace std;

int findPeakIndex(int arr[],int size){
    int s=0,e=size-1,mid;
    while(s<=e){
        mid=s + (e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]<arr[mid-1]){
            e=mid-1;
        }
        else
        break;
    }
    return mid;
}

int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int index=findPeakIndex(arr,size);
    cout<<"Peak element index is "<<index;
}