#include <iostream>
using namespace std;

int factN(int n){

    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int factnMr(int n,int r){
    int factn = factN(n);
    int factr = factN(r);
    int factnMr = factN(n-r);
    
    float cal = factn / (factnMr * factr);
}


int main(){
    int n = 10,r = 5;
    cout <<factnMr(10,5) << endl;
    return 0;
}