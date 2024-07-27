//Number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n,check=0;
    cout<<"Enter Number to check";
    cin>>n;
    if(n<=1){
        cout<<"Number is neither Prime nor Composite";
        return 0;
    }
    for(int i=2; i<=n/2;i++){
    if(n%i==0){
        cout<<"Number is not Prime";
        check=1;
        break;
        }
    }
    if(check==0){
        cout<<"Number is  Prime";
    }

    

    
    
}