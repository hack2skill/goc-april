#include <bits/stdc++.h>
using namespace std;

int main() {
    // Take input n
    int n;
    cin>>n;
    
    /* Explanation:
	The following pattern can be clearly seen:
	when n=1, Anuj loses
	when n=2, Anuj wins since he can choose x=1
	when n=3, Anuj loses since he can only choose x=1 leaving with 2. From above statement, the person who is left with 2 will win hence Anvi wins.
	when n=4, Anuj wins as he can choose x=1 to reduce it to an odd number 3. Froom above statement, the person left with 3 loses, hence Anuj wins.
	ans so on..
	therefore: if n is odd ans is false and if n is even ans is true.
    */
    (n&1)?cout<<"false":cout<<"true";

    // Time complexity: O(1)
    // Space complexity: O(1)
    return 0;
}
