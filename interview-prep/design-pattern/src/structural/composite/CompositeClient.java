package structural.composite;

public class CompositeClient {
    public static void main(String[] args) {
        Product[] products = {
                new Product(1),
                new Product(2),
                new Product(3),
                new Product(4)
        };

        Box[] boxes = {
                new Box(1),
                new Box(2),
                new Box(3)
        };

        boxes[0].add(products[0]);
        boxes[0].add(products[1]);
        boxes[0].add(products[2]);

        boxes[1].add(products[3]);

        boxes[2].add(boxes[0]);
        boxes[2].add(boxes[1]);

        boxes[2].print(0);
    }



}
