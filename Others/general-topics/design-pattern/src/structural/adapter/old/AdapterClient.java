package structural.adapter.old;

public class AdapterClient {
    public static void main(String[] args) {
        OldOMS oldOMS = new OldOMS();
        oldOMS.addItem(new Item("Beer", 6.0));
        oldOMS.addItem(new Item("wine", 2));

        oldOMS.makePayment(new Payment("CARD", 7.0));
        oldOMS.makePayment(new Payment("CREDIT", 1.0));
    }
}
