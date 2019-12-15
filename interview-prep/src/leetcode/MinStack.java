class MinStack {

    /** initialize your data structure here. */
    StackNode top;
    public MinStack() {
        top = null;
    }
    
    public void push(int x) {
        StackNode newNode = new StackNode(x);
        newNode.next = top;
        top = newNode;

    }
    
    public void pop() {
        top = top.next;
    }
    
    public int top() {
        return top.data;
    }
    
    public int getMin() {
        int min = Integer.MAX_VALUE;
        StackNode temp = top; 
        while(temp != null){
            if(temp.data < min){
                min = temp.data;
            }
            temp = temp.next;
        }
        
        return min;
    }
}
class StackNode{
    int data; 
    StackNode next;
    StackNode(int data){
        this.data = data;
    }
}
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */