package adapter.old;

public class Item {
    private String description;
    private double price;

    @Override
    public String toString() {
        return "Item{" +
                "description='" + description + '\'' +
                ", price=" + price +
                '}';
    }

    public Item(String description, double price){
        this.description = description;
        this.price = price;
    }
}
