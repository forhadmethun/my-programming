package strategy; 
import java.util.*;

public class Order{
    List<Item> items = new ArrayList<>(); 
    public void addItem(Item item){
        items.add(item);
    }
    public void makePayment(PaymentStrategy ps){
        ps.pay();
    }
}