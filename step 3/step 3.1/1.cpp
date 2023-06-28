#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[],int n){
    
    int maxans=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxans)
        {
            maxans=arr[i];
        }
        
    }
    cout<<maxans<<endl;
    

}

int main()
 {  
    int  arr[] = {2,5,1,3,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n);
     return 0;
 }              