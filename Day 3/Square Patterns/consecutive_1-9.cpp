#include <iostream>
using namespace std;
int main(){

    int n,num=1;
    cout<<"Enter the number:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}