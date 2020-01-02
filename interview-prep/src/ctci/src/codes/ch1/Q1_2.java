package codes.ch1;

import java.util.Scanner;
import java.io.FileReader;
import java.nio.file.Paths;
import java.util.Arrays;

public class Q1_2 {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_2.txt"));
        String firstString = sc.nextLine();
        String secondString = sc.nextLine();

//        if(checkIfPermutation(firstString, secondString))System.out.println("Yes");
        if(checkIfPermutationOptimized(firstString, secondString))System.out.println("Yes");
        else System.out.println("No");

    }

    //O(nlongn) solution
    public static boolean checkIfPermutation(String firstString, String secondString){
        if(firstString.length()!=secondString.length())return false;
        char[] firstCharacterArray = firstString.toCharArray();
        char[] secondCharacterArray = secondString.toCharArray();

        Arrays.sort(firstCharacterArray);
        Arrays.sort(secondCharacterArray);

        if(Arrays.equals(firstCharacterArray,secondCharacterArray))return true;
        return false;

    }

    //O(n) solution
    final static  int NO_OF_CHARS = 256;
    public static boolean checkIfPermutationOptimized(String firstString, String secondString){
        if(firstString.length()!=secondString.length())return false;

        int[] countArray = new int[NO_OF_CHARS];
        int firstStringLength = firstString.length();
        for(int i=0;i<firstStringLength;i++){
            countArray[firstString.charAt(i)]++;
            countArray[secondString.charAt(i)]--;
        }
        for(int i=0;i<NO_OF_CHARS;i++){
            if(countArray[i]!=0)return false;
        }

        return true;


    }


}
