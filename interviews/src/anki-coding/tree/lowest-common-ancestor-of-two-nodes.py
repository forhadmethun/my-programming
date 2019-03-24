class Node:
    def __init__(self, data,  left = None, right = None):
        self.data = data
        self.left = left
        self.right = right

class Tree:
    def lca(self, root, node1, node2):
        if None in (root, node1, node2):
            return None 
        if not self._if_node_exists(root, node1) or not self._if_node_exits(root, node2):
            return None 
        
        return self._lca(root, node1, node2)
    
    def _if_node_exists(self, root, node):
        if root is node:
            return True 
        if root is None:
            return False 
        left_existance =  self._if_node_exists(root.left, node)
        right_existance =  self._if_node_exists(root.right, node)
        
        return left_existance or right_existance 
        
    def _lca(self, root, node1, node2):
        if root is None:
            return None 
        if root is node1 or root is node2:
            return root 
        left = self._lca(root.left, node1, node2)
        right = self._lca(root.right, node1, node2)

        if left and right:
            return root 
        else:
            return left if left else right
