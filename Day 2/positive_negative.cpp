#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number :";
    cin>>num;

    if(num < 0){
        cout<<"Number is Negative"<<endl;
    }
    else{
        cout<<"Number is Positive"<<endl;
    }

    return 0;
}