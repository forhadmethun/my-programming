package topic_wise.datastructure.tree;

class BST {
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
        }
    }

    static Node insert(Node root, int data) {
        if (root == null) {
            root = new Node(data);
        } else if (data <= root.data) {
            root.left = insert(root.left, data);
        } else {
            root.right = insert(root.right, data);
        }
        return root;
    }

    static void inOrder(Node root) {
        if (root == null) return;
        inOrder(root.left);
        System.out.printf(" %d", root.data);
        inOrder(root.right);
    }

    static boolean search(Node root, int data) {
        if (root == null) return false;
        if (data == root.data) return true;
        else if (data < root.data) return search(root.left, data);
        else return search(root.right, data);
    }

    static int findMin(Node root) {
        while (root.left != null) {
            root = root.left;
        }
        return root.data;
    }

    static int findMax(Node root) {
        while (root.right != null) {
            root = root.right;
        }
        return root.data;
    }

    static int height(Node root) {
        if (root == null) return -1;
        int lHeight = height(root.left);
        int rHeight = height(root.right);
        return Math.max(lHeight, rHeight) + 1;
    }

    boolean isBST(Node root) {
        if (root == null) return true;
        if (isBST(root.left) &&
                isBST(root.right) &&
                isSubtreeLesser(root.left, root.data) &&
                isSubtreeGreater(root.right, root.data)


        ) {
            return true;
        }
        return false;
    }

    static boolean isSubtreeLesser(Node root, int data) {
        if (root == null) return true;
        if (root.data > data &&
                isSubtreeLesser(root.left, data) &&
                isSubtreeLesser(root.right, data)
        ) {
            return true;
        } else {
            return false;
        }
    }

    static boolean isSubtreeGreater(Node root, int data) {
        if (root == null) return true;
        if (root.data < data &&
                isSubtreeGreater(root.left, data) &&
                isSubtreeGreater(root.right, data)
        ) {
            return true;
        } else {
            return false;
        }
    }

    static boolean isBST(Node root, int min, int max){
        if( root == null ) return true;
        if(root.data > min &&
                root.data < max &&
                isBST(root.left, min, root.data) &&
                isBST(root.right,root.data, max)

        ){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {

        Node root = null;

        root = insert(root, 3);
        root = insert(root, 2);
        root = insert(root, 1);

        inOrder(root);
        System.out.println();
        System.out.println(height(root));
    }
}