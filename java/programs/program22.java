import java.util.Scanner;


abstract class Shape {
    double dim1, dim2;

    
    Shape(double d1, double d2) {
        dim1 = d1;
        dim2 = d2;
    }

   
    abstract void area();
}


class Rectangle extends Shape {
    Rectangle(double length, double width) {
        super(length, width);
    }

    void area() {
        System.out.println("Area of Rectangle: " + (dim1 * dim2));
    }
}


class Triangle extends Shape {
    Triangle(double base, double height) {
        super(base, height);
    }

    void area() {
        System.out.println("Area of Triangle: " + (0.5 * dim1 * dim2));
    }
}


public class program22 {
    public static void main(String[] args) {

        System.out.println("NMAXSCS030 ");
    System.out.println("Yedhukrishna A.M");

        Scanner sc = new Scanner(System.in);

       
        System.out.print("Enter length of rectangle: ");
        double length = sc.nextDouble();
        System.out.print("Enter width of rectangle: ");
        double width = sc.nextDouble();
        Shape rect = new Rectangle(length, width);
        rect.area();

        
        System.out.print("Enter base of triangle: ");
        double base = sc.nextDouble();
        System.out.print("Enter height of triangle: ");
        double height = sc.nextDouble();
        Shape tri = new Triangle(base, height);
        tri.area();

        sc.close();
    }
}