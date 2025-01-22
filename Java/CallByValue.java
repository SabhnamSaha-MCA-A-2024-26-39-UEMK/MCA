public class CallByValue {
    public static void main(String[] args) {
        int num = 5;
        System.out.println("Before modification: " + num);
        modifyValue(num);
        System.out.println("After modification: " + num);
    }

    public static void modifyValue(int number) {
        number = 10;  // This will not affect the original variable
    }
}
