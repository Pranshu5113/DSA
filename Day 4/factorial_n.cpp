// Wirite a program in c++ to find factorial of n numbers ?

#include <iostream>
using namespace std;

int factN(int n){

    int fact=1;

    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){

   cout<< factN(5) << endl; //print value of 5 fact//

   return 0;
}