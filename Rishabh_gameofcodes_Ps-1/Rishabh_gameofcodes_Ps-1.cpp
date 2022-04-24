#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v = {1, 1, 1, 1, 1};
    for (long long i = 0; i < n - 1; i++)
    {
        for (long long j = 0; j < 5; j++)
        {
            v[j] = accumulate(v.begin() + j, v.end(), 0);
        }
    }
    cout << accumulate(v.begin(), v.end(), 0) << "\n";
    return 0;
}