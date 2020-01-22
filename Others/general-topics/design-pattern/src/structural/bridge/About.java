package structural.bridge;

public class About extends WebPage {
    Theme theme;
    public About(Theme theme) {
        super(theme);
        this.theme = theme;
    }

    @Override
    void getContent() {
        System.out.println("About Page : " + theme.getColor());
    }
}
