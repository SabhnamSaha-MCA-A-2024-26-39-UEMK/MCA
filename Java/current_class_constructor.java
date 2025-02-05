class Example {
    int x;
    public Example() {
        this(10);
    }
    public Example(int x) {
        this.x = x;
        System.out.println("Value of x: " + x);
    }
}
public class Main {
    public static void main(String[] args) {
        Example example = new Example();
    }
}
