package structural.bridge;

public class About extends WebPage {
    public About(Theme theme) {
        super(theme);
    }

    @Override
    void getContent() {
        System.out.println("About Page");
    }
}
