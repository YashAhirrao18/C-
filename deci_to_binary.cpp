//decimal to binary code
#include <iostream>
#include<math.h>//for pow() function
using namespace std;
int main(){
    int n;
    cin>>n;
    int bit,i=0,ans=0;
    while(n>0){
        bit=n&1;
        ans=bit*pow(10,i)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}

