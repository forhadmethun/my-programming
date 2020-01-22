package structural.composite;

public class Product implements Item {
    int id;

    Product(int id){
        this.id = id;
    }


    @Override
    public void print(int level) {
        for(int i = 0; i < level; i++){
            System.out.print("\t");
        }
        System.out.println("Product " + id);
    }
}
