class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        
class Stack:
    def __init__(self):
        self.head=None
        self.top=None

    def is_empty(self):
        if self.head==None:
            return True
        else:
            return False
    
    def push(self,data):
        nd=Node(data)
        nd.next=self.top
        self.top=nd
        self.head=nd
        
    def pop(self):
        curr=self.top
        if self.is_empty():
            print("The Stack Is Empty")
        else:
            self.top=self.top.next
            self.head=self.top
            del curr    
    
    
    def top_ele(self):
        if self.is_empty()==False:
            top_element=self.top.data
        else:
            print("The Stack Is Empty")
        return top_element        
    
    def display_all(self):
        if self.head==None:
            print("The Stack Is Empty")
        else:
            point=self.top
            while point!=None:
                print(f"Data:{point.data}")
                point=point.next    
                

S=Stack()
#push
S.push(10)
S.push(20)
S.push(30)
S.push(40)
S.push(50)
S.push(60)

#display stack
print("\nDisplay stack elements")
S.display_all()
print("*************************************\n")

#top element of stack
print("Top element:\n")
print(S.top_ele())
print("*************************************\n")

#pop
print("pop 3 elements")
S.pop()
S.pop()
S.pop()
print("*************************************\n")

#top element of stack
print("Top element: ")
print(S.top_ele())                
print("*************************************\n")

#display stack
print("Display stack elements")
S.display_all()