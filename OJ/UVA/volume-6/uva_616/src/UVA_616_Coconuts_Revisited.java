import java.util.Scanner;

class UVA_616_Coconuts_Revisited {
    public static final int EXIT_CONDITION = -1;

    public static void solveCoconutsRevisited() {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            int numberOfCoconuts = scanner.nextInt();

            if (numberOfCoconuts == EXIT_CONDITION) break;

            determineLargestNumberOfPersons(numberOfCoconuts);
        }
    }

    public static void determineLargestNumberOfPersons(int numberOfCoconuts) {
        int maximumPossiblePerson = (int) Math.round(Math.sqrt(numberOfCoconuts));
        int currentPersonNumber;
        final int MINIMUM_POSSIBLE_PERSON = 2;
        boolean hasSolution = false;
        for (currentPersonNumber = maximumPossiblePerson; currentPersonNumber >= MINIMUM_POSSIBLE_PERSON; currentPersonNumber--) {
            if (checkSolvabilityForCurrentPerson(currentPersonNumber, numberOfCoconuts)) {
                hasSolution = true;
                break;
            }
        }
        printSolution(hasSolution, numberOfCoconuts, currentPersonNumber);
    }
    public static void printSolution(boolean hasSolution,  int numberOfCoconuts, int currentPersonNumber){
        if (hasSolution) {
            System.out.printf("%d coconuts, %d people and 1 monkey\n", numberOfCoconuts, currentPersonNumber);
        } else {
            System.out.printf("%d coconuts, no solution\n", numberOfCoconuts);
        }
    }

    public static boolean checkSolvabilityForCurrentPerson(int currentPersonNumber, int numberOfCoconuts) {
        int currentlyLeftCoconuts = numberOfCoconuts;
        for (int i = 1; i <= currentPersonNumber; i++) {
            if ((currentlyLeftCoconuts - 1) % currentPersonNumber != 0) {
                return false;
            }
            currentlyLeftCoconuts = currentlyLeftCoconuts - ((currentlyLeftCoconuts - 1) / currentPersonNumber) - 1;
        }
        if (currentlyLeftCoconuts % currentPersonNumber == 0) {
            return true;
        }
        return false;

    }

    public static void main(String[] args) {
        solveCoconutsRevisited();
//        wholeSolutionInAMethod();
    }

    public static void wholeSolutionInAMethod() {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            int input = scanner.nextInt();
            if (input == -1) break;
            boolean hasSolution = false;
            int person;
            int maximumPossiblePerson = (int) Math.round(Math.sqrt(input));
            for (person = maximumPossiblePerson; person >= 2 && !hasSolution; person--) {
                int n = input;
                boolean isPossible = true;
                for (int i = 1; i <= person; i++) {
                    if ((n - 1) % person != 0) {
                        isPossible = false;
                        break;
                    }
                    n = n - ((n - 1) / person) - 1;
                }
                if (isPossible == false) continue;
                if (n % person == 0) {
                    hasSolution = true;
                }
            }
            if (hasSolution) {
                System.out.printf("%d coconuts, %d people and 1 monkey\n", input, person + 1);
            } else {
                System.out.printf("%d coconuts, no solution\n", input);
            }
        }
    }
}