package mycodeschool; 

import java.util.*; 
class BalancedParenthesisCheck{
    public static void main(String[] args){
        System.out.println(isParenthesisBalanced("()()(()){}[()]"));
    }
    static boolean isParenthesisBalanced(String s){
        java.util.Stack<Character> stack = new java.util.Stack<>(); 
        for(Character c: s.toCharArray()){
            if(c == '('){
                stack.push(')');
            }
            else if(c == '{'){
                stack.push('}');
            }
            else if(c == '['){
                stack.push(']');
            }
            else if(stack.isEmpty() || c != stack.pop()){
                return false;
            }
        }
        return stack.isEmpty(); 
    }
}