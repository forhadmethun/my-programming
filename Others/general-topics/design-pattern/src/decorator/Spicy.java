package decorator;

public class Spicy extends PizzaDecorator {
    public Spicy(Item item) {
        super(item);
    }
    public void prepare(){
        super.prepare();
        System.out.println(" + Spicy");
    }
}
