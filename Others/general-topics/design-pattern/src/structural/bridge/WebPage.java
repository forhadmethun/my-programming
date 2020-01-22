package structural.bridge;

public abstract class WebPage {
    protected Theme theme;
    abstract void getContent();
    public WebPage(Theme theme){
        this.theme = theme;
    }
}
