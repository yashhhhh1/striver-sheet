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
int sol2(vector<int> &ans, int k)
{

    int n = ans.size();
    int cnt = 0 ,presum = 0;
    map<int, int>mpp;

    mpp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        presum += ans[i];


        int remove = presum - k;

        cnt += mpp[remove];

        mpp[presum] += 1;
    }
    

    return cnt;
}

int main()
{
    vector<int> arr = {3,-3,1,1,1};
    int k = 3;

    // int cnt = sol1(arr, k);
    int cnt = sol2(arr, k);

    cout << "the total subarray is :" << cnt;
    return 0;
}