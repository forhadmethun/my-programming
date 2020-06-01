package structural.adapter.newadapter;
import java.util.*;
public class NewOMS {
    private List cart = new ArrayList();
    private List payments = new ArrayList();
    public void addItem(Item itemXML){
        cart.add(itemXML);
        System.out.println(itemXML.toString());
    }
    public void makePayment(Payment paymentXML){
        payments.add(paymentXML);
        paymentXML.pay();
    }
}
