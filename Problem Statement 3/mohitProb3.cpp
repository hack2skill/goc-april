#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define deb(x) cout << #x << "=" << x << endl;

const int mod = 1e9 + 7;
const int mod2 = 998244353;
const double PI = 3.1415926535897932384626433832795;

//EXPLAINATION :

// in this problem, I used DP. basically I am creating an array that keeps the max solution stored.
//in addition to it, I have added two variables, namely current_max and current_sol, so we are checking the value iteratively and
//keeping the value stored
// at the end we are returning the sum of elements of maximum array created



int solve(vector<int>&v, int k)
{
    int n = v.size();
    vector<int> letsUseDP(n+1, 0);

		  for(int i=1; i<=n; i++){
              int current_sol = 0;
              int current_max = 0;
			  

			  for(int j=1; j<=k && i-j>=0; j++){
				  current_max = max(current_max, v[i-j]);
				  current_sol = max(current_sol, letsUseDP[i-j] + current_max * j);
			  }
			  letsUseDP[i] = current_sol;
		  }

        //   cout<<dp[n];
		   return letsUseDP[n];
    
    
    
}
    
