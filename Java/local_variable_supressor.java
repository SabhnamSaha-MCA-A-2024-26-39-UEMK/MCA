class Example {
    int x;
    Example(int x) {
        this.x = x;
    }
    void display() {
        int x = 5;
        System.out.println("Local x: " + x);
        System.out.println("Instance x: " + this.x);
    }
}
public class Main {
    public static void main(String[] args) {
        Example example = new Example(10);
        example.display();
    }
}
