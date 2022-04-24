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

//here we have 5 characters, and we need to output pairs of string on increasing the value of n
// for n=1, we get a,e,i,o,u, which means output : 5 (numbers)
//for n=2, we get ["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"]., we get 15 strings so output = 15

// so simply, if we suppose every vowel equal to 1, and we sum it up, on every iteration till n==0, then we get the solution,
// it is because it simply calculates the pairs, so for n=1, it got 5, so if we are finding n=2, the data will iterate from 2 to 0, so the answer will be
//will be 15


int solve(int x)
{
    int a=1,e=1,i=1,o=1,u=1;

    while(x--){
        a=a;
        e= e +a;
        i= i+e;
        o= o+i;
        u= u+o;


    }
    // cout<<a+e+i+o+u<<endl;

    return a+e+i+o+u;    

    
}
    

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n; cin>>n;
    solve(n);
    
}