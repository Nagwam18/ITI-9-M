def optimal_bst(keys, freq, n):
    cost = [[0] * n for _ in range(n)]
    for i in range(n):
        cost[i][i] = freq[i]
    for L in range(2,n+1):
        for i in range(n-L+1):
            j=i+L-1
            cost[i][j]=float('inf') 
            for r in range(i,j+1):
                left=cost[i][r - 1] if r>i else 0
                right=cost[r+1][j] if r<j else 0
                total=sum(freq[i:j+1])
                cost[i][j]=min(cost[i][j],left+right+total)
    
    return cost[0][n-1]

keys = [10, 20, 30]
freq = [0.4, 0.3, 0.3]
n = len(keys)
print("Optimal Cost:", optimal_bst(keys, freq, n))
