#include <bits/stdc++.h>
using namespace std;


int sol1(int arr[], int n, int k){

   
    int len=0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
           for (int k = i; k <=j; k++)
           {
             sum+=arr[k];
           }
           if (sum==k)
                len= max(len,j-i+1);  
        }   
    }
    return len;
}

int sol2(int arr[], int n, int k){
   
    int len=0;
    
    for (int i = 0; i < n; i++)
    {   int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];

            if (sum==k)
                len= max(len,j-i+1);          
        }  
    }
    return len;
}

void sol3(int arr[], int n ,int sum ){
    map<int , int> presum;
    int cursum=0;
    int maxLen=0;

    for (int i = 0; i < n; i++)
    {
        cursum += arr[i];
        

        if (cursum == sum)
        {
            maxLen= max(maxLen,i+1);
           
        }

        int rem = cursum - sum;

        if(presum.find(rem) != presum.end()){
            int len = i - presum[rem];
            maxLen=max(maxLen,len);
        }

        if(presum.find(cursum) != presum.end()){
            presum[cursum]=i;
        }
        
    }
    cout<<maxLen<<" ";

}

int main()
 {
    int arr[]={2,3,5,1,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=10;

   
    int ans=sol1(arr,n,sum);
    cout<<"sol1 ans is : "<<ans<<" "<<endl;

    int a=sol2(arr,n,sum);
    cout<<"sol2 ans is : "<<a<<" "<<endl;

    sol3(arr,n,sum);
     return 0;
 }

