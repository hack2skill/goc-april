#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans=0;
    cin>>n;
    vector<int> v(5);
    v[0]=1;
    for (int i = 2; i <= N; i++) {
        for (int j = 3; j >= 0; j--)
            v[j] += v[j + 1];
    }
    for (auto c : v)
        ans += c;
    cout<<ans<<endl;
    
	return 0;
}
