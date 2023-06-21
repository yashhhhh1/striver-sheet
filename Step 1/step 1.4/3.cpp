#include<iostream>
using namespace std;
 int sol1(int n)
 {
    int digit=0,reverse=0;
    while (n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n/=10;
    }
   return reverse;
    
 }
int main()
 {
    int n=121;
    int ans=sol1(n);

    if (n == ans)
    {
        cout<<"this is palidrome number";
    }
    else
    {
        cout<<"this is not palidrome number";
        
    }
    


     return 0;
 }