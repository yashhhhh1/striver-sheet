#include <bits/stdc++.h>
using namespace std;
 int sum=1;
 void sol1(int i,int n){

    if (i>n)
    {
        cout<<"the sum is :"<<sum;
        return;
    }

    sum+=i;    
    sol1(i+1,n);
    
 }
int main()
{
    int n;
    cout<<"enter the numbe:";
    cin>>n;
    sol1(1,n);
    return 0;
}