package mycodeschool.tree;

public class BST {
    TreeNode root;
    BST(){
        this.root = null;
    }
    void insert(int val){
        this.root = insert(root, val);
    }
    TreeNode insert(TreeNode node, int val){
        if(node  == null){
            node = new TreeNode(val);
            return node;
        }
        if((int)val <= (int)node.data){
            node.left = insert(node.left, val);
        }
        else{
            node.right = insert(node.right, val);
        }
        return node;
    }
    boolean search(int val){
        return search(root, val);
    }
    boolean search(TreeNode node, int val){
        if(node == null) return false;
        else if((int)val == (int)node.data) return true;
        else if((int)val < (int)node.data) return search(node.left, val);
        else return search(node.right, val);
    }
    int findMin(){
        if(root == null) return -1;
        TreeNode tempNode = root;
        while(tempNode.left != null){
            tempNode = tempNode.left;
        }
        return tempNode.data;
    }
    TreeNode findMin(TreeNode root){
        if(root == null) return null;
        if(root.left == null) return root;
        return findMin(root.left);
    }
    int height(TreeNode root){
        if(root == null) return -1;
        int leftHeight =  height(root.left);
        int rightHeight =  height(root.right);
        return 1 + Math.max(leftHeight, rightHeight);
    }
    int height(){
        return height(root);
    }
    private boolean isBST(TreeNode node, int MIN, int MAX){
        if(node == null) return true;
        if(node.data > MIN && node.data < MAX && isBST(node.left, MIN, node.data) && isBST(node.right,node.data, MAX)){
            return true;
        }
        else return false;
    }
    boolean isBST(){
        return isBST(root, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }
    void delete(int data){
        root = delete(root, data);
    }
    TreeNode delete(TreeNode node, int data){
        if(node == null) return node;
        else if(data < node.data) node.left = delete(node.left, data);
        else if(data > node.data) node.right = delete(node.right, data);
        else{
            // if no child
            if(node.left == null && node.right == null){
                node = null;
            }
            else if(node.left == null){
                node = node.right;
            }
            else if(node.right == null){
                node = node.left;
            }
            else{
                //find min of right subtree
                TreeNode minNode = findMin(root.right);
                node.data = minNode.data;
                node.right = delete(node.right, minNode.data);
            }
        }
        return node;
    }

    TreeNode findNode(TreeNode node, int val){
        if(node == null) return null;
        else if((int)val == (int)node.data) return node;
        else if((int)val < (int)node.data) return findNode(node.left, val);
        else return findNode(node.right, val);
    }
    TreeNode findNode(int val){
        return findNode(root, val);
    }
    TreeNode getSuccessor(int data){
        TreeNode currentNode = findNode(data);
        if(currentNode == null) return currentNode;
        if(currentNode.right!=null)return findMin(currentNode.right);
        else{
            TreeNode successor = null;
            TreeNode ancestor = root;
            while(ancestor != currentNode){
                if(currentNode.data < ancestor.data){
                    successor = ancestor;
                    ancestor = ancestor.left;
                }
                else{
                    ancestor = ancestor.right;
                }
            }
            return successor;
        }

    }
    public static void main(String[] args) {
        BST bst = new BST();
        bst.insert(2);
        bst.insert(1);
        bst.insert(-1);
        bst.insert(3);
        System.out.println(bst.search(3));
        System.out.println(bst.search(4));
        System.out.println(bst.findMin(bst.root));
        System.out.println(bst.height());
        System.out.println(bst.isBST());
        bst.delete(3);
        System.out.println(bst.search(3));




    }
}
