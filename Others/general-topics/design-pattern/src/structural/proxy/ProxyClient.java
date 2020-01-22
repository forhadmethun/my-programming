package structural.proxy;

public class ProxyClient {
    public static void main(String[] args) {
        SecureDoor door = new SecureDoor(new LabDoor());
        door.open("invalid");

        door.open("secret");
        door.close();
    }
}
