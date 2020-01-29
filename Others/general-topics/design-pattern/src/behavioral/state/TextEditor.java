package behavioral.state;

public class TextEditor {
    WritingState defaultText;
    public TextEditor(WritingState defaultText) {
        this.defaultText = defaultText;
    }
    void type(String str){
        defaultText.write(str);
    }
    void setState(WritingState defaultText){
        this.defaultText = defaultText;
    }
}
