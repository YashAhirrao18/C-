// search if the element is present in the array or not
#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return true;
    }
    return false;

}
int main (){
    int n, key,array[1000];
    cout<<"Enter the number od element in array :"<<" "<<"\n";
    cin>>n;
    cout<<"Enter the elements in array :\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"\nEnter the key to search: "<<" ";
    cin>>key;
    bool isFound= search(array,n,key);
    if (isFound)
        cout<<"Key is present in array";
    else
    cout<<"Key is not present in array";
    return 0;
 
}