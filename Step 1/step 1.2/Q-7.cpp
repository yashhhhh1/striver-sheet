#include<iostream>
using namespace std;

int main(){
    int row=5;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }
        
        
        cout<<endl;
    }
    
 
}