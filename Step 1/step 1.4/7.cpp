#include <bits/stdc++.h>
using namespace std;
 
int sol1(int n){
    for (int i = 2; i <sqrt(n) ; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}

int main()
 {
    int n=2;
   bool ans= sol1(n);

   if (n!=1 && ans==true)
   {
    cout<<"prime number";
   }else
   {
    cout<<"not a prime number";
    
   }
   
   

     return 0;
 }