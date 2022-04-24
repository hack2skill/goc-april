n = int(input())
prev=[1,1,1,1,1]
ans=[1,1,1,1,1]
for i in range(n-1):
    s=0
    for j in range(4,-1,-1):
        s=s+prev[j]
        ans[j]=s
    prev=ans.copy()
print(sum(ans))