class Job:
    def __init__(self, id, deadline, profit):
        self.id=id
        self.deadline=deadline
        self.profit=profit

def job_scheduling(arr, n):
    arr.sort(key=lambda x: x.profit, reverse=True)
    result = [''] * n
    slot = [False] * n

    for i in range(n):
        if not slot[arr[i].deadline - 1]:  
            result[i] = arr[i].id
            slot[arr[i].deadline - 1] = True   
            
    for job in result:
        if job:
            print(job)
    print()


arr = [Job('a', 2, 100), Job('b', 1, 19), Job('c', 2, 150),Job('d', 1, 25)]

n = len(arr)
print("max profit jobs:")
job_scheduling(arr, n)
