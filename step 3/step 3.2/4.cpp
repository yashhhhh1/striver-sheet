#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n){

    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;

            for (int k = i; k <= j; k++)
            {
                sum +=arr[k];
            }

            maxi=max(maxi,sum);

        }
        
    }

    cout<<maxi;
    
   
}

void sol2(int arr[], int n){

    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    { 
        int sum=0;
        for (int j = i; j < n; j++)
        {
           
            sum +=arr[j];
            

            maxi=max(maxi,sum);

        }
        
    }

    cout<<maxi;
    
   
}
void sol3(int arr[], int n){

   long long maxi=INT_MIN;
   long long sum=0;

   for (int i = 0; i < n; i++)
   {
    sum +=arr[i];

    maxi=max(maxi,sum);
    if (sum < 0)
    {
        sum=0;
    }
    

   }
   
    cout<<maxi<<endl;
   
}


int main()
 {
    int arr[]={-2,1,-3,4-1,2,1,-5,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    // sol2(arr,n);
    sol3(arr,n);
     return 0;
 }