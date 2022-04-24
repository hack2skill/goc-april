int solve(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> t(n+1,0);
        t[1]=arr[0];
        for(int i=2;i<n+1;i++)
        {
            
            int temp=INT_MIN;
            for(int j=1;j<=k && i-j>=0;j++)
            {   int maa=0;
                for(int l=1;l<=j && i-l>=0;l++)
                    maa=max(maa,arr[i-l]);
                temp=max(temp,t[i-j]+maa*j);
                t[i]=temp;
            }
        }
        return t[n];
    }
