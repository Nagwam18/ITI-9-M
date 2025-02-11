def knapSack(capacity,weight,val,n):
    arr=[]
    for i in range(n+1):  
        row=[]
        for j in range(capacity + 1):    
            row.append(0)   
        arr.append(row)   

    for i in range(1,n+1):  
        for j in range(1,capacity+1):    
            if weight[i-1]<=j:     
                arr[i][j]=max(val[i-1]+arr[i-1][j-weight[i-1]],arr[i-1][j])   
            else:
                arr[i][j] = arr[i-1][j]   
    return arr[n][capacity]   


profit = [60, 100, 120]
weight = [10, 20, 30]
capacity = 50
n = len(profit)

Max_value = knapSack(capacity,weight,profit,n)
print("Max value:", Max_value)
