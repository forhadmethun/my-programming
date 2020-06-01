package behavioral.mediator;

public class User {
    String name;
    ChatMediator mediator;
    public User(String name, ChatMediator mediator) {
        this.name = name;
        this.mediator = mediator;
    }

    public void send(String s) {
        mediator.showMessage(this, s);
    }
}
