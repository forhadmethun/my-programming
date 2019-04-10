#from collections import orderedDict

class Node:

    def __init__(self, key, parent = None, terminates = False):
        self.key = key 
        self.parent = parent 
        self.terminates = terminates 
        self.children = {}


class Trie: 

    def __init__(self):
        self.root = Node('')

    def insert(self, word):
        if word is None:
            raise TypeError("word cannot be None")
        node = self.root 
        for char in word:
            if char in node.children:
                node = node.children[char]
            else:
                node.children[char] = Node(char, parent=node)
                node = node.children[char]
        node.terminates = True 
    
    def find(self, word):
        if word is None:
            raise TypeError("word cannot be None")
        node = self.root 
        for char in word:
            if char in node.children:
                node = node.children[char]
            else:
                return None 
        return node if node.terminates else None 
    
    