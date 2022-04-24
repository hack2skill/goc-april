    int getMove(int n){
        for (int i = 1; i < n; i++){
            if (n % i == 0)
                return i;
        }
        return -1;
    }
    
    bool divisorGame(int n) {
        vector<int> dp;
        dp.push_back(n);
        int move = getMove(n), i = 0;
        
        while (move != -1){
            dp.push_back(dp[i] - move);
            move = getMove(dp[++i]);
        }
        
        return dp.size() % 2 == 0;
