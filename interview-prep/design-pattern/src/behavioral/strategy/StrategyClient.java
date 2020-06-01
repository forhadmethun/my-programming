package behavioral.strategy;

class StrategyClient{
    public static void main(String args[]){
        Order order;
        order = new Order();
        order.addItem(new Item("Pen", 10.0));
        order.addItem(new Item("Book", 22.1)); 
        order.addItem(new Item("pencil", 1.1));

        order.makePayment(new CardPayment("Debit", "monese",32.2));
        order.makePayment(new CashPayment(1));
        
    }
}