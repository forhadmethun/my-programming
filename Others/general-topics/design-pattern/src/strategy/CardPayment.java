package strategy; 

public class CardPayment implements PaymentStrategy{
    private String cardType; 
    private String issuer;
    private double amount; 
    CardPayment(String cardType, String issuer, double amount){
        this.cardType = cardType; 
        this.issuer = issuer; 
        this.amount = amount;
    }

    public void pay(){
        System.out.println("CardPayment: " + amount); 
    }
}