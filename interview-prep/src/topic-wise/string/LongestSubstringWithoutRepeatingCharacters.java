import java.util.Scanner;
import java.util.HashMap; 

class LongestSubstringWithoutRepeatingCharacters{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str;
        while(sc.hasNext()){
            str = sc.nextLine();
            System.out.println(str);
            int maxLength = 0, count = 0;
            HashMap<Character, Boolean> map = new HashMap<Character, Boolean>(); 
            if(str.length() == 1 ) {
                System.out.println(1);
                continue;
            }
            for(int i = 0; i < str.length(); i++){
                maxLength = Math.max(maxLength, count);
                if(map.containsKey(str.charAt(i))){                
                    map.clear(); 
                    count = 0;
                }
                map.put(str.charAt(i), true);
                count++;
            }
            System.out.println(maxLength);
        }
        
    }
}