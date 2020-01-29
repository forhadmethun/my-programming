package behavioral.template;

public class AndroidBuilder extends TemplateBuilder {
    void test(){
        System.out.println("android test");
    }
    void lint(){
        System.out.println("android lint");
    }
    void assemble(){
        System.out.println("android assemble");
    }
    void deploy(){
        System.out.println("android deploy");
    }
}
