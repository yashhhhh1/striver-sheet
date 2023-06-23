#include <bits/stdc++.h>
using namespace std;
void sol1(int n){

    int n1=0,n2=1;
    cout<<n1<<" "<<n2<<" ";
    for (int i = 1; i < n; i++)
    {
        int sum=n1+n2;
        cout<<sum<<" ";
        n1=n2;
        n2=sum;
    }
}


int sol2(int n){

    if (n<=1)
    {
        return n;
    }
    
    int last =sol2(n-1);
    int start =sol2(n-2);
   

    return last+start;

}
int main()
 {
   
int n=6;
    sol1(n);

    cout<<endl<<"the ans is :"<<sol2(3);

     return 0;
 }