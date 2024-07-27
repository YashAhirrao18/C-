#include<iostream>
using namespace std;
int main(){
    int n=234,a,prod=1,sum=0;

    for(int i=100000;i>=1;i/=10){
        a=n/i;
        n=n-(a*i);
        prod*=a;
        sum+=a;
    }
    cout<<prod<<"\n"<<sum;
}//not the optimal solution check leetcode for optimal
