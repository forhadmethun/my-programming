import java.util.Scanner;
//todo : time limit
class UVA_11254_Consecutive_Integers{
    public static final int TERMINATING_CONDITION = -1;

    public static void main(String[] args) {
        solveConsecutiveIntegersSumEqualToTheGivenNumber();
    }

    public static void solveConsecutiveIntegersSumEqualToTheGivenNumber() {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            int inputNumber = scanner.nextInt();
            if (inputNumber == TERMINATING_CONDITION) {
                break;
            }
            boolean solutionFound = false;
            int start = 1, howManyFollowingNumbers = 1;
            for (start = 1; start <= inputNumber && !solutionFound; start++) {
                if( (2*start) > inputNumber){
                    start = inputNumber + 1;
                    howManyFollowingNumbers = 1;
                    break;
                }
                for (howManyFollowingNumbers = 1; howManyFollowingNumbers <= inputNumber; howManyFollowingNumbers++) {
                    int numberSum = addConsecutiveNumbers(start, howManyFollowingNumbers);
                    if (numberSum == inputNumber) {
                        //got the solution
                        solutionFound = true;
                        break;
                    }
                    if (numberSum > inputNumber) {
                        break;
                    }

                }
            }
            System.out.printf("%d = %d + ... + %d\n", inputNumber, start - 1, (start + howManyFollowingNumbers - 1 - 1));
        }
    }


    public static int addConsecutiveNumbers(int start, int howManyFollowingNumbers) {
        int startingNumber = start;
        int endingNumber = (start + howManyFollowingNumbers - 1);
        int sum = (endingNumber * (endingNumber + 1)) / 2 - ((startingNumber - 1) * startingNumber) / 2;
        return sum;
    }

}