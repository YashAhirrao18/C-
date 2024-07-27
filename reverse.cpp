//Reverse an array
#include <iostream>
using namespace std;

void reverse(int array[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]; 
    }    

}
int main(){
    int n, arr[1000];
    cout<<"Enter number of elements in array :\n";
    cin>>n;
    cout<<"Enter elements in array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    reverse(arr,n);
    printArray(arr,n);


}