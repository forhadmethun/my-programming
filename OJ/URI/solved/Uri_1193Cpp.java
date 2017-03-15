/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package uri_1193.cpp;

/**
 *
 * @author forhad
 */
import java.math.BigInteger;
import java.util.Scanner;
public class Uri_1193Cpp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int T;
        T = sc.nextInt();
        sc.nextLine();
        int ii=0;
        for(ii=0;ii<T;ii++)
        {
            
            String number="";
             String base="";
            String input;
            input = sc.nextLine();
            for(int i=0;i<input.length()-4;i++)
            {
                number+=input.charAt(i);
            }
            
            base = input.substring(input.length()-3);
            //System.out.println(number);
                    
            //System.out.println(base);
            System.out.println("Case "+(ii+1 )+ ":");
            if(base.charAt(base.length()-1) == 'n')
            {
                BigInteger b = new BigInteger(number,2);
                System.out.println(b + " dec");
                System.out.println(b.toString(16) + " hex");
            }
            else if(base.charAt(base.length()-1) == 'c'){
                BigInteger b = new BigInteger(number);
                System.out.println(b.toString(16)+  " hex");
                System.out.println(b.toString(2) + " bin");
            }
            else{
                BigInteger b = new BigInteger(number,16);
                System.out.println(b +  " dec");
                System.out.println(b.toString(2) + " bin");
            }
            System.out.println();
            
            
            
        }
        
    }
    
}
