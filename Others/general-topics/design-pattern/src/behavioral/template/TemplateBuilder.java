package behavioral.template;

public abstract class TemplateBuilder {
    void test(){}
    void lint(){}
    void assemble(){}
    void deploy(){}
    void build(){
        this.test();
        this.lint();
        this.assemble();
        this.deploy();
    }
}
