//trial and error of continue keyword
#include<iostream>
using namespace std;

int main(){
    int a=1;
    while(3){
    switch(a){
        case 1: cout<<"This is case 1";
        break;
        case 2:cout<<"This is case 2";
        //continue; 
        /*when we try to insert continue keyword in switch
         it shows error that continue can only be used in loop*/

        case 3:cout<<"This is case 3";
        return 0;
        /* When we place return 0 to exit from the infinite loop 
        the program terminates as the return 0 exits the main function 
        as well and hence the cout statement in main doesn't executes*/
            
        default: cout<<"This is default";
    }  
    //break;
    /* Using break here allows to exits from while loop scope*/
    }
    cout<< "In main scope outside infinite loop"; 
}