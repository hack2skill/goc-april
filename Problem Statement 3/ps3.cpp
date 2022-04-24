#include <bits/stdc++.h>
using namespace std;

int main() {
    // Take input 
    int n,k;
    cin>>n;
    vector<int> v(n);
    for (auto &i:v) cin>>i;
    cin>>k;
    
    // i am using dp[i] to store answer for v[0]...v[i-1], hence initialising a dp of size n+1 with 0s.
    vector<int> dp(n+1,0);
    // this loop iterates on all elements and computes dp[i] 
    for (int i=1;i<=n;++i) {
	// intialising current maximum possible (curr) and newly computed temporary maxium (mx) as 0 
        int curr = 0, mx = 0;
	// this loop checks for the previous values (upto k) to check if we can improve the answer.
        for (int j=1;j<=k && i-j>=0;++j) {
	    // store current maxium possible from previous (upto k) values
            curr = max(curr,v[i-j]);
            // update dp[i] to store maxium possible using curr as the current maxium possible  
  	    mx = curr*j + dp[i-j];
            dp[i] = max(dp[i],mx);
        }
    }
    cout<<dp.back();
	
    // Time complexity: O(n*k)
    // Space complexity: O(n)
    return 0;
}
