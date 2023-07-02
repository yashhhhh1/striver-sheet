#include <bits/stdc++.h>
using namespace std;
 
void sol1(int arr[], int n){
    sort(arr,arr+n);
    cout<<"second largest element is :" <<arr[n-2]<<endl;
    cout<<"second smallest element is :"<<arr[1]<<endl;
}

void sol2(int arr[], int n){
    
     if (n==1)
    {
        cout<<"-1"<<endl;
    }else
    {
        int large=INT_MIN, small=INT_MAX;
        int second_large=INT_MIN, second_small=INT_MAX;

        for (int i = 0; i < n; i++)
        {
            large=max(large,arr[i]);
            small=min(small,arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i]>second_large && large != arr[i])
            {
                second_large=arr[i];
            }
            
            if (arr[i]<second_small && small != arr[i])
            {
                second_small=arr[i];
            }

            
        }
        

    cout<<large<<" "<<second_large<<" "<<endl;
    cout<<small<<" "<<second_small<<" "<<endl;
    }
}


void sol3(int arr[], int n){

    if (n==1)
    {
        cout<<"-1"<<endl;
    }else
    {
        int large=0, small=n;
        int second_large=0, second_small=n;

        for (int i = 0; i < n; i++)
        {
            // larges elemrnt find
            if (arr[i]>large)
            {
                second_large=large;
                large=arr[i];
            }

            if (arr[i]<large)
            {
                second_large=arr[i] > second_large ? arr[i] : second_large;
            }


            // smallest element find
            if (arr[i]<small)
            {
                second_small=small;
                small=arr[i];
            }

            if (arr[i]>small)
            {
                second_small=arr[i] < second_small ? arr[i] : second_small;
            }
            
        }

    cout<<large<<" "<<second_large<<" "<<endl;
    cout<<small<<" "<<second_small<<" "<<endl;
    }
}


int main()
 {
    int arr[]={1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sol1(arr,n);
    sol2(arr,n);
    sol3(arr,n);
  

     return 0;
 }