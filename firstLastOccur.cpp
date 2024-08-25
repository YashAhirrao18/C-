/*
There is sorted array which can conta=in duplicates
find the first and last occurence in that array
*/
#include <iostream>
using namespace std;
int firstOccurSearch(int arr[],int n,int k){
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
            if(arr[mid]==arr[mid-1])
            e=mid-1;
            else
            return mid;
        }
    }
    return -1;
}
int lastOccurSearch(int arr[],int n,int k){
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
            if(arr[mid]==arr[mid+1])
            s=mid+1;
            else
            return mid;
        }
    }
    return -1;
}
int main(){
    int size,key;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to find the first and last occurence";
    cin>>key;
    int firstOccur=firstOccurSearch(arr,size,key);
    if (firstOccur==-1)
    {   
        cout<<"Key is not present in array";
        return 0;
    }
    int lastOccur=lastOccurSearch(arr,size,key);
    cout<<"The first occurence is at "<<firstOccur<<" position\n";
    cout<<"The last occurence is at "<<lastOccur<<" position";

}