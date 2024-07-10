class Node:
    def __init__(self,data,next=None):
        self.data= data
        self.next=next
class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        if self.is_empty():
            raise Exception("Queue is empty")
        return self.items.pop()

    def size(self):
        return len(self.items)