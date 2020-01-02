package mycodeschool;
import java.util.*;

class ExpressionEvaluation{
    public static void main(String[] args){
        ExpressionEvaluation e = new ExpressionEvaluation();
        e.evaluate();

    }
    Map<Character, Integer> precedenceMap;
    ExpressionEvaluation(){
        setUpPresedenceMap();
    }
    void setUpPresedenceMap(){
        precedenceMap = new HashMap<>();
        precedenceMap.put('*', 4);
        precedenceMap.put('/', 3);
        precedenceMap.put('-', 2);
        precedenceMap.put('+', 1);
    }
    void evaluate(){
        String infixExpression = "5*6+2-1+5+6/6+5*1-2"; //so far the class work with simple operation with one single digit number
        String postfixExpression = convertInfixToPostfix(infixExpression);
        String result = evaluatePostfixExpression(postfixExpression);
        System.out.println(result);
    }
    String convertInfixToPostfix(String infixExpression){
        StringBuilder postfixExpression = new StringBuilder();
        java.util.Stack<Character> stack = new java.util.Stack<>();
        for(char c: infixExpression.toCharArray()){
            if(c >= '0' && c <='9'){
                postfixExpression.append(c);
            }
            else{ // let the expression is always valid so if a character isn't a number then it must be a operator
                while(!stack.isEmpty() && hasHighPrecedence(stack.peek(), c)){
                    postfixExpression.append(stack.peek());
                    stack.pop();
                }
                stack.push(c);
            }
        }
        while(!stack.isEmpty()){
            postfixExpression.append(stack.peek());
            stack.pop();
        }
        return postfixExpression.toString();
    }
    boolean hasHighPrecedence(char first, char second){
        if(precedenceMap.get(first) > precedenceMap.get(second)){
            return true;
        }
        return false;
    }
    String evaluatePostfixExpression(String postfixExpression){
        int result = 0;
        java.util.Stack<String> stack = new java.util.Stack<>();
        for(char c: postfixExpression.toCharArray()){
            if(c >= '0' && c <='9'){
                stack.push(c+"");
            }
            else{
                String second = stack.pop();
                String first = stack.pop();
                stack.push(applyOperator(first,second, c));
            }
        }
        return stack.peek() + "";
    }
    String applyOperator(String first, String second, char operator){
        if(operator == '+'){
            return  (Integer.parseInt(first) + Integer.parseInt(second)) + "";
        }else if(operator == '-'){
            return  (Integer.parseInt(first) - Integer.parseInt(second)) + "";
        }
        else if(operator == '*'){
            return  (Integer.parseInt(first) * Integer.parseInt(second)) + "";
        }
        else if(operator == '/'){
            return  (Integer.parseInt(first) / Integer.parseInt(second)) + "";
        }
        return '0' +"";
    }
}