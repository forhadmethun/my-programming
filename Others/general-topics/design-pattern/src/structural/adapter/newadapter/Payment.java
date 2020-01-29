package structural.adapter.newadapter;

public class Payment {
    private String type;
    private double amount;
    public Payment(String type, double amount){
        this.type = type;
        this.amount = amount;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public double getAmount() {
        return amount;
    }

    public void setAmount(double amount) {
        this.amount = amount;
    }

    public void pay(){
        System.out.println(type + " " + amount + "$");
    }
}
