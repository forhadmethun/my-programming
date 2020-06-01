package behavioral.visitor;
import java.util.*;
public class VisitorClient {
    public static void main(String[] args) {
        List<Visitable> order = new ArrayList<>();
        order.add(new FoodItem(1, "Italian Pizza", 6.99));
        order.add(new LiquorItem(1, "Wine", 6.99));
        order.add(new FoodItem(2, "Apple", 6.99));

        DiscountVisitor discountVisitor = new DiscountVisitor();
        TaxVisitor taxVisitor = new TaxVisitor();

        for(Visitable item: order){
            item.apply(discountVisitor);
            item.apply(taxVisitor);
        }
        System.out.println("total tax: " + taxVisitor.getTotalTax());
        System.out.println("total discount: " + discountVisitor.getTotalDiscount());
    }
}
