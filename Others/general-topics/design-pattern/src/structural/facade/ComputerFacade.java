package structural.facade;

public class ComputerFacade {
    Computer computer;
    ComputerFacade(Computer computer){
        this.computer = computer;
    }
    void turnOn(){
        computer.getElectricShock();
        computer.makeSound();
        computer.showLoadingScreen();
        computer.bam();
    }
    void turnOff(){
        computer.closeEverything();
        computer.pullCurrent();
        computer.sooth();
    }
}
