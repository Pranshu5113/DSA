#include <iostream>
using namespace std;

int reverseArray(int arr[],int size){
    int start=0,end=size-1;

    while(start < end){
        swap(arr[start] , arr[end]);

        start++;
        end--;
    }
    // return 0;
}


int main(){
    int arr[] = {10,2,4,8,1,6,9};
    int size = 7;

   cout<<"Reverse array :"<<reverseArray(arr,size)<<endl;

   for(int i=0;i<size;i++){
        cout<<"Reverse Array :"<<arr[i]<<endl;
   }
   return 0;
}