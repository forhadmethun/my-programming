class BSTSecondLargest:
    def find_second_largest(self, node):
        # if tree empty or tree has only root and no child
        if node is None or (node.left is None and node.right is None):
            raise TypeError("There must be at least two elements in the tree.")
        #if tree has right subtree
        return self._find_second_largest(node.right)



    def _find_second_largest(self, node):
        if node.right is not None:
            if node.right.left is not None or node.right.right is not None:
                return self._find_second_largest(node.right)
            else:
                return node 
        #if no right subtree then find the right most element in the left subtree
        else:
            return self._find_right_most_node(self, node)

            
    def _find_right_most_node(self, node):
        if node.right is not None:
            return self._find_right_most_node(node.right)
        else:
            return node;
    



