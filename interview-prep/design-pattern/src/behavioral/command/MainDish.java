package behavioral.command;

public class MainDish {
    String name;
    MainDish(String name){
        this.name = name;
    }
    void order(){
        System.out.println("order main dish " + this.name);
    }
    void cancel(){
        System.out.println("cancel main dish " + this.name);
    }
}
