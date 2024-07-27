#include<iostream>
using namespace std;
int main(){
    int sum,nextNumber,a=0,b=1;
    cout<<a<<" ";
    for(int i=0;i<10;i++){
        sum=a+b;
        cout<<sum<<" ";
        nextNumber=a+b;
        a=b;
        b=nextNumber;
        
    }
}