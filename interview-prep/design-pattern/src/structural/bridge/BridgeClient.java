package structural.bridge;

public class BridgeClient {
    public static void main(String[] args) {
        WebPage about = new About(new DarkTheme());
        WebPage career = new Careers(new AquaTheme());
        about.getContent();
        career.getContent();
    }
}
