package behavioral.state;

public class LowerCase implements WritingState{
    @Override
    public void write(String line) {
        System.out.println(line.toLowerCase());
    }
}
