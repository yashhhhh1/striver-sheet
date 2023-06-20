#include<iostream>
using namespace std;

int main(){

//    int start=1;
//    for (int i = 0; i < N; i++)
//    {
//         for (int  j = 0; j < i; j++)
//         {
//             cout<<"*";
//         }
        
//         cout<<endl;
//    }
//    for (int i = N; i > 0; i--)
//    {
//         for (int  j = 0; j < i; j++)
//         {
//             cout<<"*";
//         }
        
//         cout<<endl;
//    }



   int N=5;
    for (int i = 1; i <= 2*N-1; i++)
    {
        int stars=i;

        if (i>N) stars=2*N-i;

        for (int j = 1; j <=stars; j++)
        {
           cout<<"*";
        }
        cout<<endl;
        
    }
    
}
