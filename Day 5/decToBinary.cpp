#include <iostream>
using namespace std;

int decToBinary(int decimal){
    int rem,ans = 0, pow=1;

    while(decimal > 0){
        rem = decimal % 2;
        decimal = decimal /2;

        ans = ans + (rem*pow);

        pow = pow * 10;

    }
    return ans;
}

int main(){
    int decimal = 10;

    cout<< decToBinary(decimal)<<endl;
    return 0;
}