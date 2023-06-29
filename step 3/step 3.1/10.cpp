#include <bits/stdc++.h>
using namespace std;

int sol1(int arr[], int N ){

    int n=N+1;
    for (int i = 1; i <= n; i++)
    {
        int count=0;
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]==i)
            {
                count=1;
                break;
            }
            
        }
        if (count == 0 )
            return i;        
    }
    
    return -1;
}
int sol2(int arr[], int N ){

    
    int hash[ N + 1]={0};

    for (int i = 0; i <= N; i++)
    {
        hash[arr[i]]=1;
    }

    for (int i = 1; i <= N; i++)
    {
        if(hash[i]==0)
        return i;
    }
    
    return -1;
}

int sol3(int arr[], int N ){

    
   int totalans= (N * ( N + 1 )) / 2;
  
   int total=0;

   for (int i = 0; i < N-1; i++)
   {
        total+=arr[i];

   }
 
   int ans= totalans-total;

   return ans;
   
}

void sol4(int arr[], int N ){

    
  int xor1=0, xor2=0;

   for (int i = 0; i < N-1; i++){
   
        xor2=xor2^arr[i];
        xor1=xor1^(i + 1);
        cout<<" xor 1: "<<xor1<<" xor 2 "<<xor2<<" "<<endl;

   }

   xor1^=N;

   int ans= xor1^xor2; 
   cout<<ans;
 
   
   
}



int main()
 {
    int arr[] = {1, 5, 4, 2 };
    int n = sizeof( arr ) / sizeof( arr[0] );
    n++;
    
    // int ans=sol1(arr,n);
    // int ans=sol2(arr,n);
    // int ans=sol3(arr,n);
    sol4(arr,n);


    // cout<<ans<<" ";

    
    
     return 0;
 }