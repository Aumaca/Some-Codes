class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_beggining(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def display_list(self):
        actual_node = self.head
        while actual_node:
            print(actual_node.data)
            actual_node = actual_node.next


linked_list = LinkedList()
linked_list.insert_at_beggining(120)
linked_list.insert_at_beggining("ok")
linked_list.insert_at_beggining(1.23)
linked_list.insert_at_beggining("go")
linked_list.insert_at_beggining([2, 50, 10])
linked_list.display_list()
