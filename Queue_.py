class Node:
    def __init__(self,emp_num,name,pos):
        self.emp_num=emp_num
        self.name=name
        self.pos=pos
        self.next=None
        

class Queue:
    def __init__(self):
        self.head=None
        self.tail=None
        self.size=0


    def is_empty(self):
        if self.head==None and self.tail==None:
            return True
        else:
            return False
    
    
    def enqueue(self,emp_num,name,pos):
        nd=Node(emp_num,name,pos)
        if self.is_empty():
            self.head=nd
            self.tail=nd
        else:
            self.tail.next=nd
            self.tail=nd
        self.size=self.size+1


    def dequeue(self):
        if self.is_empty():
            print("Queue Is Empty")
        else:
            curr=self.head
            self.head=self.head.next
            if self.head==None:
                self.tail=None
            self.size=self.size-1
            del curr
    
    def front_ele(self):
        if self.is_empty():
            print("Queue Is Empty")
        else:
            print(f"Employee Number: {self.head.emp_num} ,Employee Name:{self.head.name} ,Employee Position:{self.head.pos}")    
    
    def last_ele(self):
        if self.is_empty():
            print("Queue Is Empty")
        else:
            print(f"Employee Number: {self.tail.emp_num} ,Employee Name:{self.tail.name} ,Employee Position:{self.tail.pos}")    
    
    
    def display_all(self):
        if self.is_empty():
            print("The Queue Is Empty")
        else:
            point=self.head
            while point!=None:
                print(f"Employee Number: {point.emp_num} ,Employee Name:{point.name} ,Employee Position:{point.pos}")    
                point=point.next
    
    def Qsize(self):
        return self.size



Q=Queue()
#equeue
Q.enqueue(1,"Yasmin", "Manager")
Q.enqueue(2,"Sara","CEO")
Q.enqueue(3,"Nagwa", "Engineer")
Q.enqueue(4,"Afnan","Sales")
Q.enqueue(5,"Ahmed","Devops")


#display all 
print("\nAll Employee\n")
Q.display_all()
print("****************************************\n")

#frist ele
print("First Employee :")
Q.front_ele()
print("\nLast Employee :")
Q.last_ele()
print("****************************************\n")

#dequeue
print("Deque two employee\n")
Q.dequeue()
Q.dequeue()
print("****************************************\n")

#display all 
print("All Employee\n")
Q.display_all()
print("****************************************\n")

#queue size
print("Queue Size:", Q.Qsize())
print("****************************************\n")

