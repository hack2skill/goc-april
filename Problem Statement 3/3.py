A = list(map(int,input().split()))
k = int(input())
L = len(A)
memo  =  [ 0 for _ in range(k) ]
for i in range(L-1,-1,-1):
    m, best  =  0, 0
    for j in range(i,min(L,i+k)):
        if A[j] > m:
            m  = A[j]
        s  =  (j-i+1)*m + memo[(j+1)%k]
        if s > best:
            best  =  s
            
    memo[i%k] = best
        
print(memo[0])