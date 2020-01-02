package codes.ch1;
import java.util.Scanner;
import java.nio.file.Paths;
import java.io.FileReader;

public class Q1_6 {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_6.txt"));
        while(sc.hasNext()){
            String inputString = sc.nextLine();
            String outputString = "";
            int countCharacter = 1,i=1;
            for(i=1;i<inputString.length();i++){
                if(inputString.charAt(i) == inputString.charAt(i-1)){
                   countCharacter++;
                   continue;
                }
                outputString+=inputString.charAt(i-1);
                outputString+=countCharacter;
                countCharacter = 1;
            }
            //for the end character these lines are needed
            outputString+=inputString.charAt(i-1);
            outputString+=countCharacter;

            System.out.println(outputString);
        }
    }
}
