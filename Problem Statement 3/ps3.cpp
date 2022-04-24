#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n;
    vector<int> v(n);
    for (auto &i:v) cin>>i;
    cin>>k;
    
    vector<int> dp(n+1,0);
    for (int i=1;i<=n;++i) {
        int curr = 0, mx = 0;
        for (int j=1;j<=k && i-j>=0;++j) {
            curr = max(curr,v[i-j]);
            mx = curr*j + dp[i-j];
            dp[i] = max(dp[i],mx);
        }
    }
    cout<<dp.back();
	
	return 0;
}
