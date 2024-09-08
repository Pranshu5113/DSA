#include <iostream>
using namespace std;
int main()
{
    int num;
    char ch = 'A';
    cout << "Enter the number:";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " " << ch;
        }
        ch++;
        cout << endl;
    }
    return 0;
}