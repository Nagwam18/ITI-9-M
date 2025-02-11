def dfs_list(graph,node,visited=None):
    if visited is None:
        visited = [] 
    if node not in visited:
        print(node)   
        visited.append(node)  
        for neighbor in graph[node]: 
            dfs_list(graph,neighbor,visited)
            
            
                                
graph = {
    'A':['B', 'C'],
    'B':['A', 'D', 'E'],
    'C':['A','F'],
    'D':['B'],
    'E':['B','F'],
    'F':['C', 'E']
}

dfs_list(graph, 'A')
