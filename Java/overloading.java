class MathOperation {
    public int add(int a) {
        return a + a;
    }
    public int add(int a, int b) {
        return a + b;
    }
    public double add(double a, double b) {
        return a + b;
    }
}
public class Main {
    public static void main(String[] args) {
        MathOperation operation = new MathOperation();
        System.out.println(operation.add(5));
        System.out.println(operation.add(5, 10));
        System.out.println(operation.add(5.5, 10.5));
    }
}
