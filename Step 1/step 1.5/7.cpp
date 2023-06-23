#include <bits/stdc++.h>
using namespace std;
void printarray(int temp[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << endl;
    }
}

void sol1(int arr[], int n)
{
    int temp[n];

    for (int i = n - 1; i >= 0; i--)
    {
        temp[n - i - 1] = arr[i];
    }
    printarray(temp, n);
}

void sol2(int arr[], int n)
{
    int p1 = 0, p2 = n - 1;
    while (p1 < p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }

    printarray(arr, n);
}

void sol3(int arr[], int start,int end)
{
 
    if (start < end)
    {
        swap(arr[start], arr[end]);
        sol3(arr,start+1,end-1);
    }
    

}
void sol4(int arr[],int n ){
    reverse(arr,arr+n);
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout<<"the temp array  can use:"<<endl;
    sol1(arr,n);
    cout<<"the swap method can use:"<<endl;
    sol2(arr,n);
    cout<<"the resursion swap method can use:"<<endl;
    sol3(arr1, 0,n-1);
    printarray(arr1, n);
    cout<<"the c++ library method can use:"<<endl;
    sol4(arr2,n);
    printarray(arr2, n);

    return 0;
}