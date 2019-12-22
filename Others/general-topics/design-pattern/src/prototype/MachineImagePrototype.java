package prototype;

import java.util.*;

public class MachineImagePrototype {
    private StringBuilder image = null;

    public MachineImagePrototype(String os, String antiVirus){
        image = new StringBuilder(os).append(" + " + antiVirus);
    }
    private MachineImagePrototype(String sw){
        image = new StringBuilder(sw);
    }
    public void install(String sw){
        image.append(sw);
    }
    public void print(){
        System.out.println(image.toString());
    }
    public MachineImagePrototype clone(){
        return new MachineImagePrototype(this.image.toString());
    }
}
