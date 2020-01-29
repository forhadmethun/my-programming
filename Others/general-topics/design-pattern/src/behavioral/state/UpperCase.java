package behavioral.state;

public class UpperCase implements WritingState{
    @Override
    public void write(String line) {
        System.out.println(line.toUpperCase());
    }
}
