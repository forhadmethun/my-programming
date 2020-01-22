package structural.flyweight;
import java.util.*;
public class VehicleFactory {
    private List<Vehicle> pool = new ArrayList<>();
    public VehicleFactory(){
        for(int i = 0 ; i < 5; i++){
            pool.add(new Vehicle("v " + (i+1)));
        }
    }

    public Vehicle getVehicle(String color, int speed, int duration){
        for(Vehicle vehicle : pool){
            if(!vehicle.isActive()){
                vehicle.setProperties(color, speed, duration);
                return vehicle;
            }
        }
        return null;
    }
}
