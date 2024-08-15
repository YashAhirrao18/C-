//Next larger elememnt
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n,nextLarge;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter elements of array";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            if(arr[i]<arr[j]){
                nextLarge=arr[j];
                break;
            }
            else
            nextLarge=-1;
             
            

        }
        
        cout<<"Element next large to : "<<arr[i]<<" is "<<nextLarge<<endl;
    }
}