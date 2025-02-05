class Example {
    Example getInstance() {
        return this;
    }
    void display() {
        System.out.println("Instance method called");
    }
}
public class Main {
    public static void main(String[] args) {
        Example example = new Example();
        example.getInstance().display();
    }
}
