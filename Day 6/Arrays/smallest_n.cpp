#include <iostream>
using namespace std;

int main(){

    int arr[] = {10,20,3,1,2};
    int size=5;

    int smallest = INT8_MAX;

    for(int i=0;i<5;i++){

        if(arr[i] < smallest){
            smallest = arr[i]; 
        }

    }
    cout<<"Smallest No. = "<< smallest <<endl;
    return 0;
}