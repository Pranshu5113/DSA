// Wirite a program in c++ to find Sum of n numbers ?

#include <iostream>
using namespace std;

int sumN(int n){
    int sum=0;

    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}

int main(){

    cout<< sumN(10) << endl; // Sum of N Numbers using Faction

    return 0;
}