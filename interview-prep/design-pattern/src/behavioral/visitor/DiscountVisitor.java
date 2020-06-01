package behavioral.visitor;

public class DiscountVisitor implements Visitor{
    double tax, totalTax = 0;
    @Override
    public void visit(FoodItem item) {
        tax = item.price * 0.02;
        totalTax +=tax;
    }

    @Override
    public void visit(LiquorItem item) {
        tax = item.price * 0.02;
        totalTax +=tax;
    }
    public double getTotalDiscount() {
        return totalTax;
    }
}
