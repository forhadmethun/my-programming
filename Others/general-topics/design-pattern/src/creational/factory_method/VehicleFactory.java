package creational.factory_method;

public class VehicleFactory {
    public Vehicle getVehicle(String vehicleType){
        if(vehicleType == null){
            return null;
        }
        Vehicle vehicle = null;
        switch(vehicleType){
            case "car":
                vehicle = new Car();
                break;

            case "truck":
                vehicle = new Truck();
                break;
        }
        return vehicle;
    }

    public static void main(String[] args) {
        VehicleFactory vehicleFactory = new VehicleFactory();
        vehicleFactory.getVehicle("car").design();
        vehicleFactory.getVehicle("car").manufacture();
    }
}
