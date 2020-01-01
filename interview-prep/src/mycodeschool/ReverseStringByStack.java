package mycodeschool; 
import java.util.*; 

class ReverseStringByStack{
    public static void main(String[] args){
        char[] string = {'H', 'E', 'L', 'L', 'O'}; 
        print(string);
        reverseByStack(string); 
        print(string);

    }
    static void print(char[] string){
        for(int i = 0; i < string.length; i++){
            System.out.printf("%c", string[i]); 
        }
        System.out.println();
    }
    static void reverseByStack(char[] string){
        java.util.Stack<Character> characterStack = new java.util.Stack<Character>();
        for(int i = 0; i < string.length; i++){
            characterStack.push(string[i]); 
        }
        int k = 0; 
        while(!characterStack.isEmpty()){
            string[k++] = characterStack.peek(); 
            characterStack.pop();
        }
    }

}