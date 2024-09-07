#include <iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter a Character :";
    cin>>ch;

    if(ch >= 'A' && ch <='Z'){
        cout<<"Charcter is upperCase";
    }
    else{
        cout<<"Character is lowerCase";
    }
    return 0;
}