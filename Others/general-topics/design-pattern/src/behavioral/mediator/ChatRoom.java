package behavioral.mediator;

import java.util.Date;

public class ChatRoom implements ChatMediator {
    @Override
    public void showMessage(User user, String message) {
        System.out.println(new Date() + " : " + user.name + " : " + message);
    }
}
