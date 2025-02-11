def matrix_chain_order(p):
    n=len(p)-1
    arr=[[0]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if i != j:
                arr[i][j] = float('inf')
    for l in range(2,n+1):
        for i in range(n-l+1):
            j=i+l-1
            for k in range(i,j):
                cost=arr[i][k] + arr[k+1][j] + p[i]* p[k+1] *p[j+1]
                if cost < arr[i][j]:
                    arr[i][j] = cost
    return arr[0][n-1]

matrix=[20,40,60,80]
min_operations=matrix_chain_order(matrix)
print("Mini multiplication:",min_operations)
