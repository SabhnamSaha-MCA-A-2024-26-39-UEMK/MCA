class Person {
    String name;
    Person(String name) {
        this.name = name;
    }

    void showDetails(Person p) {
        System.out.println("Person name: " + p.name);
    }
    void callShowDetails() {
        this.showDetails(this);
    }
}
public class Main {
    public static void main(String[] args) {
        Person person = new Person("John");
        person.callShowDetails();
    }
}
