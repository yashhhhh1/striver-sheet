#include <iostream>
using namespace std;

int main()
{

    int row = 5;
    char a = 'A';
    for (int i = row; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << ' ';
            a++;
        }
        a = 'A';
        cout << endl;
    }
}
