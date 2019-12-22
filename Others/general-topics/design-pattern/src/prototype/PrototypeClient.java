package prototype;

public class PrototypeClient {
    public static void main(String[] args) {
        MachineImagePrototype linuxVM = new MachineImagePrototype("linux", "symantec");
        MachineImagePrototype windownsVM = new MachineImagePrototype("linux", "symantec");

        linuxVM.print();

        MachineImagePrototype linuxServer = linuxVM.clone();
        linuxServer.install(" + Apache");
        linuxServer.print();
    }
}
