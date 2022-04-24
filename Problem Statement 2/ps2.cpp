#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans=0;
    // Take input n
    cin>>n;
    
    // for every character 'x' in [a,e,i,o,u] we need to put '5-x+1' characters n number of times and hence we are using 2 nested for loops.
    
    // Initialising v vector of size 5 with 1s which is default answer when n=1;
    // Also, v[4] will always be 1, ie, uuuu...n times.
    vector<int> v(5,1);
    // calculating answer starting from n=2 to n and adding in vector v corresponding to each vowel.
    for (int i = 2; i <= n; i++) {
        for (int j = 3; j >= 0; j--)
            // for length i, and vowel represented by position j, vector v stores all combinations possible.
            v[j] += v[j + 1];
    }
    
    // finally we sum all the elements in v pertaining to combinations starting from each corresponding vowel.
    for (auto c : v)
        ans += c;
    cout<<ans<<endl;
    
    // Time complexity: O(n*5)
    // Space complexity: O(5) => O(1)
    return 0;
}
