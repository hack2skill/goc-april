    int countVowelStrings(int n) {
        n+=4;
        long long sol = n*(n-1)*(n-2)*(n-3)/24;
        return sol;
    }
