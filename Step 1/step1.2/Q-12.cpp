#include<iostream>
using namespace std;

int main(){

    int row=5;
    int space= 2*(row-1);
    
     for (int i = 1; i <=row; i++)   
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <=space; j++)
        {
            cout<<" ";
        }
        for (int j = i; j >= 1; j--)
        {
          cout<<j;
        }
        
        
        cout<<endl;
        space-=2;
    }
}
