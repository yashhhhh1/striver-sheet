#include <bits/stdc++.h>
using namespace std;


int sol1(int arr[], int n, int k){

   
    int maxLen=0;
    
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
                maxLen= max(maxLen,j-i+1);  
        }   
    }
    return maxLen;
}

int sol2(int arr[], int n, int k){
   
    int maxLen=0;
    
    for (int i = 0; i < n; i++)
    {   int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];

            if (sum==k)
                maxLen= max(maxLen,j-i+1);          
        }  
    }
    return maxLen;
}

int  sol3(int arr[], int n ,int sum ){
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

        if(presum.find(cursum) == presum.end()){
            presum[cursum]=i;
        }
        
    }
   return maxLen;

}

int sol4(int arr[], int n, int k){
   
    int maxLen=0;
    int right=0,left=0;
    int sum=arr[0];

    while (right < n)
    {
        while (left <= right && sum > k )
        {
            sum-=arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1); 
        }       
        
        right++;
        if (right<n)   sum +=arr[right];
        
        
    }

    return maxLen;
}

int main()
 {
    int arr[]={2,3,5,1,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=10;

   
    int ans1=sol1(arr,n,sum);
    cout<<"sol1 ans is : "<<ans1<<" "<<endl;

    int ans2=sol2(arr,n,sum);
    cout<<"sol2 ans is : "<<ans2<<" "<<endl;

    int ans3=sol3(arr,n,sum);
    cout<<"sol3 ans is : "<<ans3<<" "<<endl;

    int ans4 = sol4(arr,n,sum);
    cout<<"sol4 ans is : "<<ans4<<" "<<endl;

    return 0;
 }

