package structural.decorator;

public class PizzaDecorator implements Item {
    Item pizza;
    public PizzaDecorator(Item item){
        pizza = item;
    }
    @Override
    public void prepare() {
        pizza.prepare();
    }
}
