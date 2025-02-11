class Item:
    def __init__(self,value,weight):
        self.value = value
        self.weight = weight

def fractional_knapsack(capacity,items):
    items.sort(key=lambda x:(x.value/x.weight),reverse=True)
    total_value = 0
    remaining_capacity=capacity
    for i in items:
        if remaining_capacity >= i.weight:
            total_value += i.value
            remaining_capacity -= i.weight
        else:
            fraction=remaining_capacity / i.weight
            total_value +=i.value*fraction
            remaining_capacity = 0
            break
    return total_value


items = [
    Item(60,10),   
    Item(100,20),  
    Item(120,30)   
]
capacity = 50 

max_value=fractional_knapsack(capacity,items)
print("Max value", max_value)
