public class ReturnValue {
    public static void main(String[] args) {
        int result = add(5, 10);
        System.out.println("The sum is: " + result);
    }

    public static int add(int a, int b) {
        return a + b;
    }
}
