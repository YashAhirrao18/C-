//Swap the alternate numbers in array
#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i+1<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
    
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[1000],n;
    cout<<"Enter the number of elements in array :\n";
    cin>>n;
    cout<<"Enter elements in array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    printArray(arr,n);
    
    
    


}