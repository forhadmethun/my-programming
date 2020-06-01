package behavioral.observer;

import behavioral.strategy.Item;
import structural.adapter.newadapter.Payment;

public class ObserverClient {
    public static void main(String[] args) {
        Order order = new Order();
        order.addItem(new Item("Pizza", 6.99));
        order.addItem(new Item("Wine", 9.99));
        order.addItem(new Item("Beer", 5.99));
        order.addItem(new Item("Banana", 1.49));

        order.makePayment(new Payment("CASH", 20.00));
        order.makePayment(new Payment("CREDIT", 20.00));
        order.makePayment(new Payment("DEBIT", 20.00));

        order.completeOrder();
    }
}
