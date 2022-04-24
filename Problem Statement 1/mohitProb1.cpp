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

//the number n is between 0 < x < n, so it can't hold value equal to 0 and n.
// so if we take example of n=4 (even), then only value x=1,2,3 exists, which means only Anuj won 1 and avni won 1, then  anuj won 2 , and avni has no more moves.
// hence anuj won and true is returned

// consider n=3(odd), then only values x=1,2 exists, which means anuj won 1, then avni won 1 and then moves are over. so anuj did'nt won last match
// so he lost and false is returned. 


int solve(int x)
{
    if(x%2==0){
        // cout<<"yes"<<endl;
        return true;
    }
    else{
        // cout<<"no"<<endl;
        return false;
    }

    
}
    

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n; cin>>n;
    solve(n);
    
}