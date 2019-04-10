class Node:
    def __init__(self,data):
        self.data = data
        self.left = None 
        self.right = None 

class MinHeightBST:
    def create_min_bst(self, array):
        if array is None:
            return None 
        return self._create_min_bst(array, 0, len(array) - 1)  
    
    def _create_min_bst(self, array, min_index, max_index):
        if min_index > max_index:
             return None
        mid = max_index // 2; 
        root = Node(array[mid])
        root.left = self._create_min_bst(array, 0, mid-1)
        root.right = self._create_min_bst(array, mid+1, len(array) -1 )
        return root

