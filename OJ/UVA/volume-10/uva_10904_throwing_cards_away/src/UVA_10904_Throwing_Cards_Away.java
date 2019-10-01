import java.util.Queue;
import java.util.Scanner; 
//todo : time limit
class UVA_10904_Throwing_Cards_Away{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNext()){
            Integer input = scanner.nextInteger(); 
            if(input.intValue() == 0) break; 
            Queue<Integer> cardsQueue = new LinkedList<Integer>(); 
            for(int i = 1; i <= input; i++){
                cardsQueue.add(i); 
            }

            int answer = cardsQueue.peek();
            while(cardsQueue.size()!=1){
                cardsQueue.remove(); 
                cardsQueue.add(cardsQueue.remove());
            }
            System.out.println(cardsQueue.peek());
            
        }
    }
}