package structural.bridge;

public class Careers extends WebPage {
    Theme theme;
    public Careers(Theme theme) {
        super(theme);this.theme = theme;
    }

    @Override
    void getContent() {
        System.out.println("Career Page + " + theme.getColor());
    }
}
