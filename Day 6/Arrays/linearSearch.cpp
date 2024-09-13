#include <iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){

    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,2,3,4,6,8,9};
    int size = 7;
    int target = 4;

    cout << linearSearch(arr,size,target)<<endl;
     
    return 0;
}