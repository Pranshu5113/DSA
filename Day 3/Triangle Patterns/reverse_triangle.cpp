#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;
}