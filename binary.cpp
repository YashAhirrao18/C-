#include<iostream>
using namespace std;

void inputArray(int arr[],int &size, int &key){
    cout<<"Enter the size of array:"<<" ";
    cin>>size;
    cout<<"Enter the elements in array:"<<" ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to find :"<<" ";
    cin>>key;

}
void printArray(int arr[],int size){
    cout<<"Printing the array:"<<" ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int binarySearch(int arr[],int size, int key){
    int start=0,end=size-1,mid;
    
    while (start<=end)
    {
        mid= (start+end)/2;
        if(key==arr[mid]){
            cout<<"Key is found at \""<<mid<<"\" position";
            return 0;
            
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
    }
    cout<<"Key is not found in the array";
    return -1;
    

}

int main(){
    int array[100];
    int n,x,key;
    inputArray(array,n,key);
    binarySearch(array,n,key);
    

}