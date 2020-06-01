package behavioral.state;

public class StateClient {
    public static void main(String[] args) {
        TextEditor editor = new TextEditor(new DefaultText());
        editor.type("First Line");


        editor.setState(new UpperCase());
        editor.type("Second Line");
        editor.type("Third Line");

        editor.setState(new LowerCase());
        editor.type("Second Line Lower");
        editor.type("Third Line Lower");



    }
}
