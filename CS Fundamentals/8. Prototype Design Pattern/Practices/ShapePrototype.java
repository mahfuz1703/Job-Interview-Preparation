interface IPrototype {
    IPrototype clone();
    void displayInfo();
    
}

class Shape implements IPrototype{
    String type;
    String color;

    public Shape(String type, String color){
        this.type = type;
        this.color = color;
    }

    @Override
    public IPrototype clone(){
        return new Shape(this.type, this.color);
    }

    @Override
    public void displayInfo() {
        System.out.println("Shape Type: " + type);
        System.out.println("Shape Color: " + color);
    }
}

public class ShapePrototype {
    public static void main(String[] args) {
        Shape originalShape = new Shape("Circle", "Red");
        originalShape.displayInfo();

        Shape cloneShape = (Shape) originalShape.clone();
        cloneShape.displayInfo();
    }
}
