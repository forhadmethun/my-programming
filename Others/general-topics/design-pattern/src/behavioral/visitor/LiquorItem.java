package behavioral.visitor;

public class LiquorItem implements Visitable{
    String name;
    int amount;
    double price;
    public LiquorItem(int i, String wine, double v) {
        this.name = wine;
        this.amount = i;
        this.price = v;
    }

    @Override
    public void apply(Visitor visitor) {
        visitor.visit(this);
    }
}
