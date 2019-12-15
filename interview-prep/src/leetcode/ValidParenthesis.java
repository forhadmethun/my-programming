class ValidParenThesis{
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>(); 
        for(int i = 0; i < s.length(); i++){
            if(isOpenningBraces(s.charAt(i))){
                stack.push(s.charAt(i));
            }else{
                if(stack.isEmpty())return false;
                char top = stack.pop();
                if(pairedWithTop(top, s.charAt(i))){
                    continue; 
                }else{
                    return false;
                }
            }
        }
        return stack.isEmpty()? true: false;
    }
    
    public boolean isOpenningBraces(char ch){
        if( ch == '(' || ch == '[' || ch == '{') return true;
        return false;
    }
    
    public boolean pairedWithTop(char left, char right){
        if( left == '(' && right == ')'){
            return true;
        }
        else if( left == '{' && right == '}'){
            return true;
        }
        else if( left == '[' && right == ']'){
            return true;
        }
        return false;
    }
}