package behavioral.momento;

public class EditorMomento {
    String text = "";
    public EditorMomento(String text) {
        this.text = text;
    }
    String getContent(){
        System.out.println(text);
        return this.text;
    }
}
