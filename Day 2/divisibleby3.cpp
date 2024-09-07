#include<iostream>
using namespace std;

int main(){
    int num,sum=0;

    cout<<"Enter a Number :";
    cin>>num;

    for(int i=0;i<= num ; i++){
        sum = sum + i;
    }
    cout<<"Sum = "<<sum<<endl;
    if((sum%3) == 0){
        cout<<"Number is Divisible By 3"<<endl;
    }else{
        cout<<"Number is not Divisible By 3"<<endl;
    }
    return 0;
}