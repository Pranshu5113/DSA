#include <iostream>
using namespace std;

int main(){

    int a,b;
    float Sum,Mul,Div,Diff,Mod;

    cout<<"Enter value a :";
    cin>>a;
    
    cout<<"Enter value b :";
    cin>>b;

    Sum = a + b;
    Diff = a - b;
    Mul = a * b;
    Div = a / b;
    Mod = a % b;

    cout<<"Sum = "<<Sum<<endl;
    cout<<"Difference ="<<Diff<<endl;
    cout<<"Multiplication = "<<Mul<<endl;
    cout<<"Division = "<<Div<<endl;
    cout<<"Modulus = "<<Mod<<endl;

    return 0;
}

