import java.util.Scanner;
class ThreeDObject {
    double surfaceArea() {
        return 0;
    }
    double volume() {
        return 0;
    }
}
class Box extends ThreeDObject {
    double length, width, height;
    Box(double length, double width, double height) {
        this.length = length;
        this.width = width;
        this.height = height;
    }
     double surfaceArea() {
        return 2 * (length * width + length * height + width * height);
    }
    double volume() {
        return length * width * height;
    }
}
class Cube extends Box {
    Cube(double side) {
        super(side, side, side);
    }
}
class Cylinder extends ThreeDObject {
    double radius, height;

    Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }
    double surfaceArea() {
        return 2 * Math.PI * radius * (radius + height);
    }
    double volume() {
        return Math.PI * radius * radius * height;
    }
}
class Cone extends ThreeDObject {
    double radius, height;
    Cone(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }
    double surfaceArea() {
        return Math.PI * radius * (radius + Math.sqrt(radius * radius + height * height));
    }
    double volume() {
        return (1.0 / 3) * Math.PI * radius * radius * height;
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Box dimensions (length, width, height): ");
        Box box = new Box(scanner.nextDouble(), scanner.nextDouble(), scanner.nextDouble());
        System.out.print("Enter Cube side: ");
        Cube cube = new Cube(scanner.nextDouble());

        System.out.print("Enter Cylinder radius and height: ");
        Cylinder cylinder = new Cylinder(scanner.nextDouble(), scanner.nextDouble());
        System.out.print("Enter Cone radius and height: ");
        Cone cone = new Cone(scanner.nextDouble(), scanner.nextDouble());
        System.out.println("\nBox Surface Area: " + box.surfaceArea());
        System.out.println("Box Volume: " + box.volume());
        System.out.println("\nCube Surface Area: " + cube.surfaceArea());
        System.out.println("Cube Volume: " + cube.volume());
        System.out.println("\nCylinder Surface Area: " + cylinder.surfaceArea());
        System.out.println("Cylinder Volume: " + cylinder.volume());
        System.out.println("\nCone Surface Area: " + cone.surfaceArea());
        System.out.println("Cone Volume: " + cone.volume());
    }
}
