#include <bits/stdc++.h>
using namespace std;
 
 int cnt=0;
void sol1(int i, int n)
{
    if (cnt==n)
    {
        return;
    }
    cout<<"yash"<<endl;
    cnt++;
    sol1(i++,n);

}
int main()
 {
    int n;
    cout<<"enter the number :";
    cin>>n;
    sol1(1,n);
     return 0;
 }