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
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for (int j = 1; j <= 2*i+1; j++)
        {
            cout<<ch;
            if (j<= breakpoint  ) ch++;
            else ch--;
            
        }
        for (int j = 0; j < row-i-1; j++)
        {
            cout<<" ";
        }
        
        
        cout<<endl;
    }
    
 
}