package behavioral.command;

public class Waiter {
    void execute(Command command){
        command.execute();
    }
}
