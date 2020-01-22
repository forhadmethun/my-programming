package behavioral.chain_of_responsiblity;

abstract class Account {
    Account account;
    double balance;
    void setNext(Account account){
        this.account = account;
    }
    void pay(double amountToPay) throws Exception {
        if(this.canPay(amountToPay)){
            System.out.println("paid by " + this.getClass().getSimpleName());
        }
        else if(this.account!=null){
            System.out.println("can not be paid by " + this.getClass().getSimpleName());
            this.account.pay(amountToPay);
        }else{
            throw new Exception("None of the account has balance");
        }
    }
    boolean canPay(double balance){
        return (this.balance >= balance);
    }



}
