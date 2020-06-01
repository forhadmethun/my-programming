package structural.decorator;

public class DecoratorClient {
    public static void main(String[] args) {
        Item[] order = {
//                new DeepFries(new Pizza()),
                new DeepFries(new DoubleCheese(new Pizza()))
        };
        for(Item item: order){
            item.prepare();
            System.out.println(" ");
        }
    }
}
