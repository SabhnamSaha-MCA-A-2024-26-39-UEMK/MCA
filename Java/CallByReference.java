public class CallByReference {
    public static void main(String[] args) {
        int[] numbers = {5};
        System.out.println("Before modification: " + numbers[0]);
        modifyArray(numbers);
        System.out.println("After modification: " + numbers[0]);
    }

    public static void modifyArray(int[] array) {
        array[0] = 10;  // This will affect the original array
    }
}
