package behavioral.template;

public class TemplateClient {
    public static void main(String[] args) {
        TemplateBuilder android = new AndroidBuilder();
        android.build();

        TemplateBuilder ios = new IOSBuilder();
        ios.build();
    }
}
