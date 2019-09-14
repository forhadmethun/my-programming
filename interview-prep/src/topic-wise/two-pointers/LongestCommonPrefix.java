import java.util.Scanner; 

class LongestCommonPrefix{
    public static void main(String[] noargs){
        int count; 
        
        Scanner sc = new Scanner(System.in);
        count = sc.nextInt(); 
        sc.nextLine();

        String[] args = new String[count];
        for(int j = 0; j < count; j++){
            args[j] = sc.nextLine(); 
//            System.out.println(args[j]);
        }

        String output="";
        int index = 0, i;
        for(char ch: args[0].toCharArray()){
           // System.out.println(": "  + ch);
            for( i = 1; i < args.length; i++){
                if(index >= args[i].length() || ch!=args[i].charAt(index)){
                    System.out.println(output);
                    return;
                }
            }
            index++;
            output+=ch;
        }
        System.out.println(output);
    }
}