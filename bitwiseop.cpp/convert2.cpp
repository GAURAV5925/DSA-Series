#include<iostream>
#include<math.h>
using namespace std;

//This program will convert the decimal into binary.

int main(){

    int n;
    cin >> n;

    int ans = 0;

    int i = 0;
    
    while(n!=0){

        int bit = n & 1;

        //Formula to convert decimal to binary

        ans = (bit * pow(10,i)) + ans;

        n = n >> 1;

        i++;
    }

    cout<<"Answer is "<<ans<<endl;
    return 0;
}