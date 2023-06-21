 #include <bits/stdc++.h>
using namespace std;

void sol1(int n1,int n2){
    int ans=0;

    for (int i = 1; i <= min(n1,n2); i++)
    {
        if (n1%i==0|| n2%i==0)
        {
            
            ans=i;
        }
        
    }
    cout<<ans<<endl;
    
} 

int sol2(int n1,int n2){
    if (n2==0)
    {
        return n1;
    }

    return __gcd(n2,n1%n2);
    
}

int main()
 {
    int n1=6,n2=3;

    sol1(n1,n2);

    int a = sol2(n1,n2);
    cout<<a;

    return 0;
 }