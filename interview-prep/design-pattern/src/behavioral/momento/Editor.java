package behavioral.momento;

public class Editor {
    String text = "";
    EditorMomento momento;

    public void type(String text){
        this.text += text + "\n";
    }
    public void write(String text){
        this.text += text + "\n";
    }
    EditorMomento save(){
        return new EditorMomento(this.text);
    }
    void getContent(){
        System.out.println(this.text);
    }
}
