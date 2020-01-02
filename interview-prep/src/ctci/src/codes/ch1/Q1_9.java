package codes.ch1;

import java.util.Scanner;
import java.nio.file.Paths;
import java.io.FileReader;
class Q1_9{
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_9.txt"));
        while(sc.hasNext()){
            String first = sc.next();
            String second = sc.next();
            if(first.length()!=second.length()){
                System.out.println("NO");
            }
            else{
                first = first + first;
                if(first.contains(second)){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }
        }
    }

}