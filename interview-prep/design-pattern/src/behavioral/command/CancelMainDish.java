package behavioral.command;

import sun.applet.Main;

public class CancelMainDish implements Command{
    MainDish mainDish;
    CancelMainDish(MainDish mainDish){
        this.mainDish = mainDish;
    }
    @Override
    public void execute() {
        mainDish.cancel();
    }
}
