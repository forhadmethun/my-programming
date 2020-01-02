package codes.ch1;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.io.FileReader;
import java.nio.file.Paths;

public class Q1_3 {
    public static void main(String[] args) throws Exception{
//        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_3.txt"));

        InputStreamReader isr = new InputStreamReader(new FileInputStream(Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_3.txt"));
        BufferedReader br = new BufferedReader(isr);
        String inputString = br.readLine();
        int stringLength = Integer.parseInt(br.readLine());
        br.close();
        isr.close();
//        String inputString = sc.nextLine();
//        int stringLength = sc.nextInt();
        String outputString = getURLify(inputString,stringLength);
        System.out.println(outputString);
    }
    public static String getURLify(String inputString,int stringLength){
        String modifiedString ="";
        for(int i=0;i<stringLength;i++){
            if (inputString.charAt(i) == ' '){
                modifiedString += "%20";
            }else{
                modifiedString += inputString.charAt(i);
            }
        }
        return modifiedString;
    }
}
