#include <bits/stdc++.h>
using namespace std;
void sol1(int arr1[], int arr2[], int n, int m)
{

    set<int> mp;
    for (int i = 0; i < n; i++)
    {
        mp.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        mp.insert(arr2[i]);
    }

    for (auto i : mp)
    {
        cout << i << " ";
    }
}
void sol2(int arr1[], int arr2[], int n, int m)
{

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp[arr2[i]]++;
    }

    for (auto i : mp)
    {
        cout << i.first << " ";
    }
}
vector<int> sol3(int arr1[], int arr2[], int n, int m)
{

    int i = 0, j = 0;
    vector<int> vp;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j]) 
        {
            if (vp.size() == 0 || vp.back() != arr1[i])
                vp.push_back(arr1[i]);
            i++;
        }
        else 
        {
            if (vp.size() == 0 || vp.back() != arr2[j])
                vp.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        if (vp.back() != arr1[i])
            vp.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        if (vp.back() != arr2[j])
            vp.push_back(arr2[j]);
        j++;
    }

    return vp;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    // sol1(arr1,arr2,n,m);
    // sol2(arr1,arr2,n,m);
    vector<int> vp = sol3(arr1, arr2, n, m);
    for (auto &val : vp)
        cout << val << " ";
    return 0;
}