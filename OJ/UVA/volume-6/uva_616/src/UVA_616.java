import java.util.Scanner; 
class UVA_616{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in); 
        while(scanner.hasNext()){
            int input = scanner.nextInt(); 
            if(input == -1) break;
            boolean hasSolution = false;
            int person;
            int maximumPossiblePerson = (int) Math.round(Math.sqrt(input));
            for(person = maximumPossiblePerson ; person >= 2 && !hasSolution ; person--){                
                int n = input;
                boolean isPossible = true;
                for(int i = 1; i <= person; i++){
                    if((n-1)%person != 0){
                        isPossible = false;
                        break;
                    }
                    n = n - ((n-1)/ person) - 1; 
                }
                if(isPossible == false) continue;
                if(n % person == 0){
                    hasSolution = true;
                }            
            }
            if(hasSolution){
                System.out.printf("%d coconuts, %d people and 1 monkey\n", input, person + 1);
            }else{
                System.out.printf("%d coconuts, no solution\n",input);
            }
        }
    }
}