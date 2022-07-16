#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout<<"Enter the Value a : "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    char op;

    cout<<"Enter the Operator : "<<endl;
    cin>>op;

    switch(op){

        case '+': cout<<(a+b)<<endl;
        break;

        case '-': cout<<(a-b)<<endl;
        break;

        case '*': cout<<(a*b)<<endl;
        break;

        case '/': cout<<(a/b)<<endl;
        break;

        case '%' : cout<<(a%b)<<endl;
        break;

        default : cout<<" Please enter the valid operator"<<endl;
    }

    return 0;
}