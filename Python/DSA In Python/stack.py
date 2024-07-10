class Node:
    def __init__(self, data):
        self.data = data
        self.next = next
class stack:
    def __init__(self):
        self.size=0
        self.__head=None
    def push(self, item):
        new_node = Node(item)
        new_node.next = self.top
        self.top = new_node
        print(f"{item} pushed into stack")
    def size(self):
        count = 0
        current = self.top
        while current:
            count += 1
            current = current.next
        return count
    def size(self)->int:
        return self.__size
    def isempty(self)->bool:
        return (self.size() ==0)
    
