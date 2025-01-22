public class DefaultConstructor {
    int num;

    public DefaultConstructor() {
        num = 10;
    }

    public static void main(String[] args) {
        DefaultConstructorExample obj = new DefaultConstructorExample();
        System.out.println("Value of num: " + obj.num);
    }
}

8. Implementation of parameterized constructor. 
public class ParameterizedConstructorExample {
    int num;

    public ParameterizedConstructorExample(int value) {
        num = value;
    }

    public static void main(String[] args) {
        ParameterizedConstructorExample obj = new ParameterizedConstructorExample(25);
        System.out.println("Value of num: " + obj.num);
    }
}
