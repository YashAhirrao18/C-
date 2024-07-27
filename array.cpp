// contains some basic of array
#include<iostream>
using namespace std;
void print(int array[],int size){
    for(int i=0;i<size;i++){
    cout<< array[i]<<"\n";
    }
    cout<<"\n";
  
}
int main(){
    //array declaration this will give garbage value
    int array[5];
    print(array,5);
    // initialization with zero, all values will be zero
    int arr[5]={0};
     print(arr,5);
    // initialization rather than zero, vacant values will be zero
    int num[3]={1};
     print(num,3);
   


}