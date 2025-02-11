class Node:
    def __init__(self,id,name,pos):
        self.next=None
        self.prev=None
        self.id=id
        self.name=name
        self.pos=pos

class Linked_List:
    def __init__(self):
        self.head=None
        self.tail=None
        
    def insert(self,loc,id,name,pos):
        nd=Node(id,name,pos)
        #list is empty
        if self.head==None:
            self.head=nd
            self.tail=nd
        else:   
            if loc==0: #insert  first node 
                self.head.prev=nd
                nd.next=self.head
                self.head=nd
            else: 
                curr=self.head
                i=0
                while i<loc-1 and curr != None:
                    curr=curr.next
                    i=i+1
                if curr==None or curr==self.tail: #insert node at end
                    self.tail.next=nd
                    nd.prev=self.tail
                    self.tail=nd
                else: #insert node in middle
                    curr.next.prev=nd
                    nd.next=curr.next
                    curr.next=nd
                    nd.prev=curr 
                        

    def update(self, loc, upd_id, upd_name, upd_pos):
        if self.head == None:
            print("The list is empty")
            return False
        else:
            curr = self.head
            i = 0
            while curr != None:
                if i == loc:
                    curr.id = upd_id
                    curr.name = upd_name
                    curr.pos = upd_pos
                    print("The Node updated")
                    return True
                curr = curr.next 
                i += 1
                if i > loc:
                    break
        return False
            
    def update_by_id(self,id,upd_name,upd_pos):
        if self.head!=None:
            curr=self.head
            while curr!=None: 
                if curr.id==id: 
                    curr.name=upd_name
                    curr.pos=upd_pos
                    print("The Node is updated")
                    return True
                else:
                    curr = curr.next
            return False
        
        
    def delete_by_id(self, id):
        Deleted = False
        if self.head == None:
            print("The List Is Empty")
            return Deleted 

        if self.head.id == id: 
            if self.head == self.tail: #only one node in list
                self.head = None
                self.tail = None
            else: #first node in list
                self.head = self.head.next
                self.head.prev = None
            print("The Node Deleted")
            Deleted = True
        elif self.tail.id == id: #last node
            curr = self.tail
            self.tail = self.tail.prev
            self.tail.next = None 
            curr.prev = None
            print("The Node Deleted")
            Deleted = True
        else:                 #node in middle
            temp = self.head
            while temp != None:   
                if temp.id == id:
                    if temp.prev:
                        temp.prev.next = temp.next
                    if temp.next:
                        temp.next.prev = temp.prev
                    print("The Node Deleted")
                    Deleted = True
                    break
                else:
                    temp = temp.next
        return Deleted
        

    def Display_all(self):
        if self.head==None:
            print("The List Is Empty")
        else:
            point=self.head
            while point!=None:
                print(f"Employee id Is: {point.id} ,Employee Name Is: {point.name},Employee position Is: {point.pos}")
                point=point.next

    
    def Delete_all(self):
        if self.head==None:
            print("The List Is Empty")
        else:
            self.head=None
            self.tail=None   
            print("All List Is Deleted") 

            
                
                
linked_list = Linked_List()

# Insert nodes into the list
linked_list.insert (0,1,"Amr", "Manager")
linked_list.insert(1,2,"Asmaa", "Developer")
linked_list.insert(2,3, "Alaa", "Tester")
linked_list.insert(3,4, "Aya", "Devops")
linked_list.insert(4,5, "Heba", "web")
print("\nEmployee data:")
linked_list.Display_all()
print("\n*****************************************************\n")


# Update a node by id
linked_list.update_by_id(2,"Reem", "Senior Developer")   
linked_list.update_by_id(4,"Afnan", "Senior Gis")  
print("\nAfter update by id:")
linked_list.Display_all()
print("\n*****************************************************\n")


# Update a node by loc
linked_list.update(0,9,"Ahmed", "Senior Ai")  
linked_list.update(2,7,"Mohamed", "junior Ai")
linked_list.update(4,8,"Nagwa", "junior Ai")
print("\nAfter update by location:")
linked_list.Display_all()
print("\n*****************************************************\n")


#delete_by_id
linked_list.delete_by_id(9)
linked_list.delete_by_id(8)
print("\nDelete by employee id:")
linked_list.Display_all()
print("\n*****************************************************\n")

#insert node by specific loc
linked_list.insert(0,44,"Omar","student")
linked_list.insert(5,33,"Mesk","smiling")
linked_list.insert(4,88,"Asinatta","craying")
linked_list.insert(7,66,"Talin","Player")
print("\nInsert node by specific loc:")
linked_list.Display_all()
print("\n*****************************************************\n")

#delete all
print("\nDelete All employee:")
linked_list.Delete_all()


#check if list is empty
print("**********************************")
print("If Empty??")
linked_list.Delete_all()


