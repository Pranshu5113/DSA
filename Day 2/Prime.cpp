#include <iostream>
using namespace std;

int main(){
    int num;
    bool isPrime = true;

    cout<<"Enter a number :";
    cin>>num;

    for(int i=2;i<num-1;i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"Number is Prime"<<endl;
    }
    else{
        cout<<"Number is Not Prime"<<endl;
    }
    return 0;
}