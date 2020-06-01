package behavioral.observer;

import behavioral.strategy.Item;
import behavioral.strategy.PaymentStrategy;
import structural.adapter.newadapter.Payment;

import java.util.ArrayList;
import java.util.List;

public class Order {
    List<Item> items = new ArrayList<>();
    List<Payment> payments = new ArrayList<>();

    Topic addItemTopic;
    Topic addPaymentTopic;
    Topic completeOrderTopic;

    Order(){
        Observer cashierDisplay = new CashierDisplay();
        Observer customerDisplay = new CustomerDisplay();

        addItemTopic = new AddItemTopic();
        addPaymentTopic = new AddPaymentTopic();
        completeOrderTopic = new CompleteOrderTopic();


        addItemTopic.register(cashierDisplay);
        addPaymentTopic.register(cashierDisplay);
        completeOrderTopic.register(cashierDisplay);


        addItemTopic.register(customerDisplay);
        addPaymentTopic.register(customerDisplay);
        completeOrderTopic.register(customerDisplay);


    }

    public void addItem(Item item){
        items.add(item);
        addItemTopic.notifyObserver("item: " + item.getName() + " " + item.getPrice() + "$");
    }
    public void makePayment(Payment ps){
//        System.out.println(type + " " + amount + "$");
        addPaymentTopic.notifyObserver("payment: " + ps.getType() + " " + ps.getAmount() + "$");
    }

    public void completeOrder() {
        completeOrderTopic.notifyObserver("complete order: " + "Order Completed");

    }
}