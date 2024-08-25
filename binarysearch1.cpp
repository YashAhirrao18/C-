//Code for binary search

#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int k){
    int s=0, e=n-1,mid;
    while(s<=e){
        mid=s+ (e-s)/2;
        if(arr[mid]<k){
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]==k){
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[100];
    int n,k; //size of aray
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the elements in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search";
    cin>>k;
    int i=binarySearch(arr,n,k);
    if(i==-1)
    cout<<"Key not found in array";
    else
    cout<<"Key found at index "<<i;
}