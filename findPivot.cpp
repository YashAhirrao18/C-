//find pivot element in rotated sorted array;
#include <iostream>
using namespace std;
int findPivot(int arr[],int size){
    int s=0,e=size-1,mid;
    while(s<e){
        mid = s + (e - s) / 2;
        if(arr[mid]<=arr[0])
        e=mid;
        else 
        s=mid+1;
    }
    return s;
}
int main(){
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elemets in array";
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    int index=findPivot(arr,size);
    cout<<index;

}