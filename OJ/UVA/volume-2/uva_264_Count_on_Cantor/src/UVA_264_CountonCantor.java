import java.util.Scanner; 
class UVA_264_CountonCantor{
    public static boolean isrRightToLeftDiagonal(int counter){
        return counter % 2 == 0;
    }
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNext()){
            int input = scanner.nextInt();
            int counter = 1;
            int sum = 0;
            while(sum < input){
                sum = sum + counter;
                counter = counter + 1;
            }
            counter = counter  - 1 ;
            int a,b,cond;
            cond = input - (sum - counter);
            if(isrRightToLeftDiagonal(counter)){
                a = 1;
                b = counter;
                for(int i=1; i < cond; i++){
                    a++; b--;
                }

            }else{
                a = counter;
                b = 1;
                for(int i=1; i < cond; i++){
                    a--; b++;
                }
            }

            System.out.printf("TERM %d IS %d/%d\n",input, a, b);
        }
    }
}