package structural.flyweight;

public class Vehicle {
    boolean active;
    int duration;
    String name;
    String color;
    int speed;

    Vehicle(String name){
        this.name = name;
    }
    void setProperties(String color, int speed, int duration){
        this.color = color;
        this.speed = speed;
        this.duration = duration;
    }
    boolean isActive(){
        return active;
    }
    void addToTraffic(){
        System.out.println("->" + name + ", " + color + ", mph-" + speed + ", duration-" + duration);
        new java.util.Timer().schedule(new java.util.TimerTask() {
            @Override
            public void run() {
                active = false;
                System.out.println(name + "-> out");
            }
        }, duration * 1000);
        active = true;
    }
}
