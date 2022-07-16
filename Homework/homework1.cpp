#include<iostream>
using namespace std;

int main(){

    //this while condition will always be true if (is not put)
    while(1){
        cout<<"How are you?"<<endl;

        int num=1;
        switch(num){
            case 1: cout << "I'm Fine"<<endl;
            break;
        }
        exit (0); //this will help in exiting the switch case
    }
}