import java.util.Scanner;
class Autori{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine(); 
        String[] strArr = str.split("-");
        String out="";
        for(int i = 0; i < strArr.length; i++){
            out+=strArr[i].charAt(0);
        }
        System.out.println(out);
    }
}