package structural.adapter.newadapter;

public class Payment {
    private String type;
    private double amount;
    public Payment(String type, double amount){
        this.type = type;
        this.amount = amount;
    }
    public void pay(){
        System.out.println(type + " " + amount + "$");
    }
}
