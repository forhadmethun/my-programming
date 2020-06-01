package behavioral.command;

public class OrderMainDish implements Command{
    MainDish mainDish;
    public OrderMainDish(MainDish item1) {
        this.mainDish = item1;
    }

    @Override
    public void execute() {
        mainDish.order();
    }
}
