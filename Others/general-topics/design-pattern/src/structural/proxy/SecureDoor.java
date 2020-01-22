package structural.proxy;

public class SecureDoor {
    private Door door;
    public SecureDoor(Door door){
        this.door = door;
    }
    public void open(String password){
        if(this.authenticate(password)){
            this.door.open();
        }else{
            System.out.println("hehe! not this time..");
        }
    }
    public void close(){
        this.door.close();
    }
    private boolean authenticate(String password){
        return password.equals("secret");
    }
}
