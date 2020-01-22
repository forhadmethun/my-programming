package structural.flyweight;

import java.util.*;

public class FlyweightClient {
    static String[] types = {"bus", "truck", "car"};
    static String[] colors = {"red", "green", "blue"};
    static int[] speeds = {50, 30, 80};
    static Random r = new Random();

    public static void main(String[] args) throws InterruptedException {
        VehicleFactory factory = new VehicleFactory();
        for(int i = 0; i < 20; i++){
            Vehicle v = factory.getVehicle(
                   getRandColor(),
                   getRandSpeed(),
                    r.nextInt(5) + 1

            );
            if(v!=null){
                System.out.print("vehicle " + (i+1));
                v.addToTraffic();
            }else{
                i--;
                Thread.sleep(1000);
            }
        }
    }
    static String getRandType(){
        return types[r.nextInt(types.length)];
    }
    static String getRandColor(){
        return colors[r.nextInt(types.length)];
    }
    static int getRandSpeed(){
        return speeds[r.nextInt(types.length)];
    }
}
