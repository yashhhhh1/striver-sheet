#include <bits/stdc++.h>
using namespace std;
void sol1(int arr[], int n){

    vector<int>temp;


    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
           temp.push_back(arr[i]);
        }
        
    }
   
   int nz= temp.size();

    for (int i = 0; i < nz; i++)
    {
        arr[i]=temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        arr[i]=0;
    }

}

int *sol2(int arr[], int n){

  int j= -1;

  for (int i = 0; i < n; i++)
  {
    if (arr[i]==0)
    {
        j=i;
        break;
    }
  }

  if (j== -1)
  {
    return arr;
  }
  
  for (int i = j+1; i < n; i++)
  {
    if (arr[i]!=0)
    {
            swap(arr[i],arr[j]);
            j++;
    }
    
  }
  return arr;
  
  
    
}

int main()
 {
    int arr[]={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    // sol1(arr,n);
    sol2(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     return 0;
 }