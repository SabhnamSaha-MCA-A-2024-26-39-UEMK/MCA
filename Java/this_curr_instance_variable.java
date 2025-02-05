class Car {
    String model;
    Car(String model) {
        this.model = model;
    }
    void showModel() {
        System.out.println("Car model: " + this.model);
    }
}
public class Main {
    public static void main(String[] args) {
        Car car = new Car("Tesla");
        car.showModel();
    }
}  
