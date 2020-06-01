package behavioral.momento;

public class MomentoClientMain {
    public static void main(String[] args) {
        Editor editor = new Editor();
        editor.type("first sentence");
        editor.type("second sentence");

        EditorMomento saved  = editor.save();

        editor.type("third sentence");
        saved.getContent();
        editor.getContent();
    }
}
