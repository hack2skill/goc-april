#include <bits/stdc++.h>
using namespace std;

int maxSumPartition(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int curMax = 0, best = 0;
        for (int j = 1; j <= k && i - j >= 0; ++j)
        {
            curMax = max(curMax, arr[i - j]);
            best = max(best, dp[i - j] + curMax * j);
        }
        dp[i] = best;
    }
    return dp[n];
}

int main()
{
    vector<int> v = {1, 4, 1, 5, 7, 3, 6, 1, 9, 9, 3};
    // Input is not clear in the question as how we would know the size of array hence declaring the vector inside main function only;
    int k;
    cin >> k;
    cout << maxSumPartition(v, k) << "\n";
    return 0;
}