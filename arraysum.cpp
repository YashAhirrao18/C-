//sum of all elements in array
#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;
   for(int i=0;i<size;i++){
    sum+= arr[i];
   }
    return sum;
    
}

int main(){
    int n;
    int array[1000];
    cout<<"Enter the number of element in array";
    cin>>n;
    cout<<"Now enter elements one by one";
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
   
   int sum1= sum(array,n);
   cout<<"The sum of elements is:"<< " "<<sum1;
}