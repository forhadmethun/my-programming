package structural.decorator;

public class DeepFries extends PizzaDecorator {
    public DeepFries(Item item) {
        super(item);
    }
    public void prepare(){
        super.prepare();
        System.out.println(" + Deep Fried");
    }
}
