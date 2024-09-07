#include<iostream>
using namespace std;

int main(){
    int Num;

    cout<<"Enter a Number :";
    cin>>Num;

    if((Num%2) == 0){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
    return 0;
}