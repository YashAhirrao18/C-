//Rotate array by given steps
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n,steps;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter elements of array";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of steps to rotate";
    cin>>steps;
    for(int i=0;i<steps;i++){
        int temp=i;
        for(int j=n-steps+1;j>0;j--){
            
            arr[j]=arr[j-1];
        }
        arr[i]=arr[n-steps+1-temp];


    }
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }

}
