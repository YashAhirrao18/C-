/* User will enter amount and find out how many
 100rs , 50rs, 20rs 1rs notes will be required */
 //Done using switch and if-else
 #include <iostream>
 using namespace std;
 int  main(){
    int n;
    cout<<"Enter the amount\n";
    cin>>n;
    int note_100=0,note_50=0,note_20=0,coin_1=0;
    while(n>0){
        if (n>=100){
            note_100=n/100;
            n=n%100;
        }
         else if (n>=50){
            note_50=n/50;
            n=n%50;
        }
        else if (n>=20){
            note_20=n/20;
            n=n%20;
        }
        else if (n>=1){
            coin_1=n/1;
            n=n%1;
        }
    }
    cout<<note_100<<"notes of 100rs\n"
        <<note_50 <<"notes of 50rs\n"
        <<note_20<<"notes of 20rs\n"
        <<coin_1<<"coin of 1rs\n";

   
 }
 //Using switch
 /*

 #include <iostream>
using namespace std;

int main() {
    int n = 1330;
    int note_100 = 0, note_50 = 0, note_20 = 0, coin_1 = 0;

    while (n > 0) {
        switch (true) {
            case (n >= 100):
                note_100 = n / 100;
                n = n % 100;
                break;
            case (n >= 50):
                note_50 = n / 50;
                n = n % 50;
                break;
            case (n >= 20):
                note_20 = n / 20;
                n = n % 20;
                break;
            case (n >= 1):
                coin_1 = n / 1;
                n = n % 1;
                break;
        }
    }

    cout << note_100 << " notes of 100rs\n" 
         << note_50 << " notes of 50rs\n"
         << note_20 << " notes of 20rs\n" 
         << coin_1 << " coins of 1rs\n";

    return 0;
}

 */