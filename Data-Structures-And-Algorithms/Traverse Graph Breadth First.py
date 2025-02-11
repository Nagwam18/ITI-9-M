def bfs_list(graph,node,visited=None):
    if visited is None:
        visited=[]
    queue=[node]  
    while queue:
        curr_node=queue.pop(0)  
        if curr_node not in visited:
            print(curr_node)
            visited.append(curr_node)
            for neighbor in graph[curr_node]:
                if neighbor not in visited:
                    queue.append(neighbor)




graph = {
    'A':['B', 'C'],
    'B':['A', 'D', 'E'],
    'C':['A','F'],
    'D':['B'],
    'E':['B','F'],
    'F':['C', 'E']
}
bfs_list(graph, 'A')