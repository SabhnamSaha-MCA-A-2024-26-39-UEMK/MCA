class Example {
    void display() {
        System.out.println("Display method called");
    }
    void invokeMethod() {
        this.display();
    }
}
public class current_class {
    public static void main(String[] args) {
        Example example = new Example();
        example.invokeMethod();
    }
}
