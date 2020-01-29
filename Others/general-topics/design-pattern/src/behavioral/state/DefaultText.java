package behavioral.state;

public class DefaultText implements WritingState{
    @Override
    public void write(String line) {
        System.out.println(line);
    }
}
