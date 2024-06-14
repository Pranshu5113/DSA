#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size ; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int key = 5;

    cout << "the index of " << key << " is : " << linearSearch(arr, size, key) << endl;
    return 0;
}

