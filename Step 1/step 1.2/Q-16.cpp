#include <iostream>
using namespace std;

int main()
{

    int row = 5;
    char a = 'A';
    for (int i = 1; i <= row; i++)  
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << ' ';
        }
            a++;
      
        cout << endl;
    }
}