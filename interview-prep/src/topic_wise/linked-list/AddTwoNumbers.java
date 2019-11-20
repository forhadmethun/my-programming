
class AddTwoNumbers{
     static class Node{
        int data;
        Node next;
        
        Node(int data){
            this.data = data;
            this.next = null;
        }



    }
    public static Node insertNode(Node head, int data){
        if(head == null){
            return new Node(data);
        }
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
        return head;

    }

    public static void print(Node head){
        while(head!=null){
            System.out.println(head.data);
            head = head.next;
        }
    }

    public static Node sum(Node head1, Node head2){
        Node sum = null; 
        int c = 0, a, b; 
        while(head1!=null || head2!=null){
            a = 0; b = 0;
            if(head1!=null){
                a = head1.data;
                head1 = head1.next; 
            }
            if(head2!=null){
                b = head2.data;
                head2 = head2.next; 
            }
            sum = insertNode(sum, (a+b+c)%10);
            c = (a+b+c)/10;
        }
        if(c!=0){
            sum = insertNode(sum,c);
        }
         return sum; 
    }
     public static void main(String[] args){
          Node head1 = null, head2= null, sum = null;
        head1 = insertNode(head1, 1);
        head1 = insertNode(head1, 2);
        head1 = insertNode(head1, 3);
        head1 = insertNode(head1, 4);

        head2 = insertNode(head2, 9);
        head2 = insertNode(head2, 9);
        head2 = insertNode(head2, 9);
        head2 = insertNode(head2, 9);
        head2 = insertNode(head2, 9);

        sum = sum(head1, head2);
        
        
        print(sum); 


//                                                        print(head1);
    }
}