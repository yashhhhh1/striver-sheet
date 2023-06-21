#include <bits/stdc++.h>
using namespace std;

int sol1(int n){
    int N=n;
    int count=0;
    int x=n;
    while (x!=0)
    {
        count++;
        x/=10;
    }
    
    int ans=0;
    while (n!=0)
    {
        int digit=n%10;
        ans+=pow(digit,count);
        n/=10;
    }

    return (ans==N);
    

    
}
 
int main()
 {
    int n=153;

    int ans;
    
    if (sol1(n))
    {
        cout<<"armstrong number"<<endl;
    }else
    {
        cout<<"this is not armstrong number"<<endl;
        
    }
    
    
    return 0;
 }