#include<iostream>
using namespace std;

int main(){
    int row=5;
    for (int i = 0; i < row; i++)
    {
        for (char ch =('A'+row-1)-i; ch <=('A'+row-1) ; ch++)
        {
          cout<<ch<<" ";
        }
        
        cout<<endl;
    }
    
 
}