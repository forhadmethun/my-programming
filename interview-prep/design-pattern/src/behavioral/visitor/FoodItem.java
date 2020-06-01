package behavioral.visitor;

public class FoodItem implements Visitable{
    int amount;
    double price ;
    String name;
    public FoodItem(int i, String italian_pizza, double v) {
        this.name = italian_pizza;
        this.amount = i;
        this.price = v;
    }

    @Override
    public void apply(Visitor visitor) {
        visitor.visit(this);
    }
}
