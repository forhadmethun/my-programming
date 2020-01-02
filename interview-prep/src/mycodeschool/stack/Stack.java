package mycodeschool; 

class Stack{
    final int MAX_SIZE = 10; 
    public static void main(String[] args){
        //Stack stack = new Stack(); 
        StackImplementationByLinkedList stack = new StackImplementationByLinkedList(); 
        stack.push(2);
        stack.print(); 
        stack.push(5); 
        stack.print(); 
        stack.push(10); 
        stack.pop(); 
        stack.print();
        stack.push(12); 
        stack.push(13); 
        stack.push(14); 
        stack.push(1); 
        stack.push(12); 
        stack.push(122); 
        stack.push(122); 
        stack.push(1222); 
        stack.push(1222); 
        stack.push(12232); 
        stack.push(12232); 
        stack.print();
    }
    
    int[] stack = new int[MAX_SIZE+1]; 
    int top = -1;
    void push(int val){
        if(top >= MAX_SIZE){
            return;
        }
        stack[++top] = val; 
    }
    int pop(){
        if(top <= -1){
            System.out.println("Cannot pop from empty Stack!!"); 
            return -1;
        }
        int val = stack[top]; 
        top--;
        return val;
    }
    int top(){
        if(top <= -1){
            System.out.println("Empty Stack!!"); 
            return -1;
        }
        return stack[top];
    }
    boolean isEmpty(){
        if(top <= -1){
            return true;
        }
        return false;

    }
    void print(){
        if(top <= -1){
            System.out.println("Empty Stack!!");          
        }
        for(int i = top ; i >= 0; i--){
            System.out.printf("%d ", stack[i]);
        }
        System.out.println();
    }        
}

class StackNode{
    int data; 
    StackNode next; 
    StackNode(int data){
        this.data = data; 
        this.next = null;
    }
}
class StackImplementationByLinkedList{
    StackNode top; 
    StackImplementationByLinkedList(){
        this.top = null;
    }
    void push(int data){
        StackNode newNode = new StackNode(data); 
        newNode.next = top; 
        top = newNode;
    }
    void pop(){
        if(top!=null){
            top = top.next; 
        }
    }
    StackNode top(){
        return top; 
    }
    boolean isEmpty(){
        if(top == null) return true; 
        return false;
    }
    void print(){
        StackNode tempNode = top; 
        while(tempNode != null){
            System.out.printf("%d ",tempNode.data); 
            tempNode = tempNode.next;
        }
        System.out.println(); 
    }


}
