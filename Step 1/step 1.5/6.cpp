#include <bits/stdc++.h>
using namespace std;

int mul=1;
void sol1(int i,int n){
    if (i>n)
    {
        cout<<"the factorial is :"<<mul<<endl;
        return;
    }
    mul*=i;
    sol1(i+1,n);
    
} 


int sol2(int n){
    if (n==0)
    {
        return 1 ;
    }
    return (n*sol2(n-1));
    
}

int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    sol1(1,n);
    cout<<"the factorial is :"<<sol2(n);
    return 0;
}