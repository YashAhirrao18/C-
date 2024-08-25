//Square root of number using binary search
#include<iostream>
using namespace std;
int findSqRoot(int n){
    int s=0, e=n/2;
    int mid,sq_root=0;
    while (s<e){  
        mid= s + (e-s)/2;
        if (mid*mid==n)
            return mid;
        else if (mid*mid>n){
            e=mid-1;
          
        }
        else if(mid*mid<n){
            s=mid+1;
            
            sq_root=mid ;
        }
        
    }
    return sq_root;
    

}
int main(){
    int n;
    cout<<"Enter the number to find square root ";
    cin>>n;
   int sqr_root=findSqRoot(n);
   cout<<"Closest square root of "<< n << " is "<<sqr_root;
}