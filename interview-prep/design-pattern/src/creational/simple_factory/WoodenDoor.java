package creational.simple_factory;

public class WoodenDoor implements Door {
    private double height;
    private double width;

    public WoodenDoor(int height, int width) {
        this.height = height;
        this.width = width;
    }

    @Override
    public double getHeight() {
        return height;
    }

    @Override
    public double getWidth() {
        return width;
    }
}
