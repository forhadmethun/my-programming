package behavioral.mediator;

public class MediatorClient {
    public static void main(String[] args) {
        ChatMediator mediator = new ChatRoom();
        User forhad = new User("forhad", mediator);
        User her = new User("her", mediator);
        forhad.send("forget me?");
        her.send("who are you?");
        forhad.send("I knew that, someday you might forget me!!! no worries, i won't forget...");
    }
}
