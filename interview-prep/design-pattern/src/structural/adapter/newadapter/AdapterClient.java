package structural.adapter.newadapter;

public class AdapterClient {
    public static void main(String[] args) {
        NewOMS newOMS = new NewOMS();
        newOMS.addItem(new Item("Beer", 6.0));
        newOMS.addItem(new Item("wine", 2));
        
        newOMS.makePayment(new Payment("CARD", 7.0));
        newOMS.makePayment(new Payment("CREDIT", 1.0));
    }
}
