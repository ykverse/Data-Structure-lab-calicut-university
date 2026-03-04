
class Shape {
    void area() {
        System.out.println("Area of shape is undefined.");
    }
}


class TwoDim extends Shape {
   
}


class ThreeDim extends Shape {
   
}


class Square extends TwoDim {
    double side;

    Square(double side) {
        this.side = side;
    }

    void area() {
        System.out.println("Area of Square: " + (side * side));
    }
}


class Triangle extends TwoDim {
    double base, height;

    Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    void area() {
        System.out.println("Area of Triangle: " + (0.5 * base * height));
    }
}


class Sphere extends ThreeDim {
    double radius;

    Sphere(double radius) {
        this.radius = radius;
    }

    void area() {
        double surfaceArea = 4 * Math.PI * radius * radius;
        System.out.println("Surface Area of Sphere: " + surfaceArea);
    }
}


class Cube extends ThreeDim {
    double side;

    Cube(double side) {
        this.side = side;
    }

    void area() {
        double surfaceArea = 6 * side * side;
        System.out.println("Surface Area of Cube: " + surfaceArea);
    }
}


public class program20 {
    public static void main(String[] args) {


         System.out.println("NMAXSCS030 ");
         System.out.println("Yedhukrishna A.M");

        Shape shape;

        shape = new Square(5);
        shape.area();

        shape = new Triangle(4, 3);
        shape.area();

        shape = new Sphere(2.5);
        shape.area();

        shape = new Cube(3);
        shape.area();
    }
}