package codes.ch1;

import java.io.FileReader;
import java.nio.file.Paths;
import java.util.Scanner;

public class Q1_1 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath().toString()+"/src/codes/ch1/Q1_1.txt"));
//        Scanner sc = new Scanner(System.in);
        String inputString = sc.nextLine();
//        if(isUnique(inputString))System.out.println("Yes");else System.out.println("No");
//        if (isUniqueBitwiseatoz(inputString)) System.out.println("Yes");
        if (isUniqueASCII(inputString)) System.out.println("Yes");
        else System.out.println("No");

    }

    //O(n^2) solution
    public static boolean isUnique(String inputString) {
        int stringLength = inputString.length();
        for (int i = 0; i < stringLength; i++) {
            for (int j = i + 1; j < stringLength; j++) {
                if (inputString.charAt(i) == inputString.charAt(j)) return false;
            }
        }
        return true;
    }

    // java 8 stream solution
    public static boolean isUniqueByStream(String inputString) {
        long distinctStringLength = inputString
                .chars()
                .distinct()
                .count();
        if (distinctStringLength != inputString.length()) return false;
        return true;
    }

    //O(nlogn)
    //sort then loop through
    //use set data structure


    //O(n) solution
    //use extra boolean array

    //without extra data structure
      // 'a' to 'z'
    public static boolean isUniqueBitwiseatoz(String inputString){
        int checker = 0;
        int inputStringLength = inputString.length();
        for(int i=0;i<inputStringLength;i++){
            int characterBitRespectToa = inputString.charAt(i) - 'a';
            if((checker & (1 << characterBitRespectToa))>0){
                return false;
            }
            checker = checker | (1<< characterBitRespectToa);
        }
        return true;
    }

      // all ascii characters
    public static boolean isUniqueASCII(String inputString){
        long checker1 = 0;
        long checker2 = 0;
        long checker3 = 0;
        long checker4 = 0;

        int inputStringLength = inputString.length();
        for(int i=0;i<inputStringLength;i++){
            int currentCharacterIntVal = inputString.charAt(i);
            int choice = currentCharacterIntVal / 64;
            currentCharacterIntVal %= 64;
            switch(choice){
                case 0:
                    if((checker1 & (1L << currentCharacterIntVal))>0){
                        return false;
                    }
                    checker1 |= 1L << currentCharacterIntVal;
                    break;
                case 1:
                    if((checker2 & (1L << currentCharacterIntVal))>0){
                        return false;
                    }
                    checker2 |= 1L << currentCharacterIntVal;
                    break;
                case 2:
                    if((checker3 & (1L << currentCharacterIntVal))>0){
                        return false;
                    }
                    checker3 |= 1L << currentCharacterIntVal;
                    break;
                case 3:
                    if((checker4 &(1L <<currentCharacterIntVal))>0)return false;
                    checker4 |= 1L << currentCharacterIntVal;
                    break;
            }
        }

        return true;
    }

      // all unicode
;

}
