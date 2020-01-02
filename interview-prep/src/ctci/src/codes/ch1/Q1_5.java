package codes.ch1;
import java.util.Scanner;
import java.io.FileReader;
import java.nio.file.Paths;

public class Q1_5 {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_5.txt"));
        while(sc.hasNext()){
            String firstString = sc.next();
            String secondString = sc.next();

            isOneEditMatchPossible(firstString, secondString);
        }
    }
    public static void isOneEditMatchPossible(String firstString, String secondString){
        //make the first string the bigger one
        if(firstString.length() < secondString.length()){
            String tempString = firstString;
            firstString = secondString;
            secondString = tempString;
        }
        int firstStringLength = firstString.length();
        int secondStringLength = secondString.length();

        if(firstStringLength-secondStringLength >1) System.out.println(false);
        else if(firstStringLength - secondStringLength == 1){
            //first string greater
            //second string smaller
            int differentCharacterCount=0;
            int slowLoopCounter = 0;
            for(int i=0;i<firstStringLength;i++){
//                    if(i<firstStringLength-1){
                if(firstString.charAt(i)!=secondString.charAt(slowLoopCounter)){
                    differentCharacterCount++;
                    continue;
                }
//                    }
//                    if(i<firstStringLength-1)slowLoopCounter++;
//                    else differentCharacterCount++;
                if(slowLoopCounter<secondStringLength-1)slowLoopCounter++;
            }

           computeResult(differentCharacterCount);
        }
        else{
            //both string length same
            int differentCharacterCount = 0;
            for(int i=0;i<firstStringLength;i++){
                if(firstString.charAt(i)!=secondString.charAt(i))differentCharacterCount++;
            }
            computeResult(differentCharacterCount);
        }

    }
    public static void computeResult(int differentCharacterCount){
        if(differentCharacterCount==0|| differentCharacterCount==1){
            System.out.println(true);
        }
        else{
            System.out.println(false);
        }
    }
}
