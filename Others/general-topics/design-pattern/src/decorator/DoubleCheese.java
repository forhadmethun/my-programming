package decorator;

public class DoubleCheese extends PizzaDecorator {
    public DoubleCheese(Item item) {
        super(item);
    }
    public void prepare(){
        super.prepare();
        System.out.println(" + Double Cheese");
    }
}
