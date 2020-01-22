package behavioral.chain_of_responsiblity;

public class ChainOfResponsibilityClient {
    public static void main(String[] args) throws Exception {
        Account bank = new Bank(100);
        Account paypal = new Paypal(200);
        Account bitcoin = new Bitcoin(300);

        bank.setNext(paypal);
        paypal.setNext(bitcoin);

        bank.pay(259);

    }
}
