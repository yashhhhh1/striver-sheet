#include<iostream>
using namespace std;

int main(){
    int row=5;
    int space=2*row-2;
     for (int i =  1; i <row; i++)
    {
       for (int j = 1; j <=i; j++)
       {
        cout<<"*";
       }
       for (int j = 0; j < space; j++)
       {
        cout<<' ';
       }
       
       for (int j = 1; j <=i; j++)
       {
        cout<<"*";
       }
    space-=2;
        cout<<endl;
    }
    
    space=0;
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j <row-i; j++)
       {
        cout<<"*";
       }
       for (int j = 0; j < space; j++)
       {
        cout<<' ';
       }
       
       for (int j = 1; j <=row-i; j++)
       {
        cout<<"*";
       }
       space+=2;

        cout<<endl;
    }
   
    
 
}