class Box {
    double length;
    public Box(double length) {
        this.length = length;
    }
}
class BoxContainer {
    Box box;
    public BoxContainer(Box box) {
        this.box = box;
    }
    void display() {
        System.out.println("Box Length: " + box.length);
    }
}
public class Main {
    public static void main(String[] args) {
        Box box = new Box(5.5);
        BoxContainer container = new BoxContainer(box);
        container.display();
    }
}
