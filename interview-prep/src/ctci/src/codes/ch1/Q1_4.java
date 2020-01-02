package codes.ch1;

import java.util.Scanner;
import java.io.FileReader;
import java.nio.file.Paths;

public class Q1_4 {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new FileReader( Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_4.txt"));
        while(sc.hasNext()){
            String inputString = sc.nextLine();
//            System.out.println(inputString);
            if(isPalindromePermutation(inputString))System.out.println("Substring Palindrome");
            else System.out.println("Not Substring Palindrome.");
        }
    }
    public static final int NO_OF_DATA = 256;
    public static boolean isPalindromePermutation(String inputString){
        int[] countArray = new int[NO_OF_DATA];
        int inputStringLength = inputString.length();
        inputString = inputString.toLowerCase();
        for(int i=0;i<inputStringLength;i++){
//            char currentCharacter = inputString.charAt(i);
            if(inputString.charAt(i) == ' ')continue;
            else if(countArray[inputString.charAt(i)]!=0){
                countArray[inputString.charAt(i)]--;
            }
            else  countArray[inputString.charAt(i)]++;
        }
        int count = 0;
        for(int i=0;i<NO_OF_DATA;i++){
            count+= countArray[i];
        }
        if(count==0 || count == 1)return true;
        return false;
    }
}
