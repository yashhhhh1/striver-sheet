#include <bits/stdc++.h>
using namespace std;

int sol1(vector<int> &ans, int k)
{

    int n = ans.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += ans[j];

            if (sum == k)
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;

    int cnt = sol1(arr, k);

    cout << "the total subarray is :" << cnt;
    return 0;
}