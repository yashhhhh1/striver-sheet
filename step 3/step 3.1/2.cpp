#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[],int n){
    
    int first_max=0, second_max;
    int first_min=n, second_min;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>first_max)
        {
            second_max=first_max;
            first_max=arr[i];
        }
        else if(arr[i]<first_max && arr[i]>second_min){
            second_max=arr[i];
        }   

        if (arr[i]<first_min)
        {
            second_min=first_min;
            first_min=arr[i];
        }
        else if (arr[i]>first_min && arr[i]<second_min)
        {
            second_min=arr[i];
        }
       
        
         
    }
    cout<<second_max<<endl;
    cout<<second_min<<endl;
    
    

}

int main()
 {  
    int  arr[] = {2,5,10,3,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n);
     return 0;
 }              