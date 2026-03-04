import java.util.Scanner;

class VolumeCalculator {

    // Volume of cube
    double volume(double side) {
        return side * side * side;
    }

    // Volume of rectangular box
    double volume(double length, double width, double height) {
        return length * width * height;
    }

    // Volume of cylinder
    double volume(double radius, int height) {
        return Math.PI * radius * radius * height;
    }
}

public class program17 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
   
        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

        VolumeCalculator vc = new VolumeCalculator();

        // Cube
        System.out.print("Enter side of cube: ");
        double side = sc.nextDouble();
        System.out.println("Volume of Cube: " + vc.volume(side));

        // Rectangular Box
        System.out.print("Enter length of box: ");
        double length = sc.nextDouble();
        System.out.print("Enter width of box: ");
        double width = sc.nextDouble();
        System.out.print("Enter height of box: ");
        double height = sc.nextDouble();
        System.out.println("Volume of Rectangular Box: " + vc.volume(length, width, height));

        // Cylinder
        System.out.print("Enter radius of cylinder: ");
        double radius = sc.nextDouble();
        System.out.print("Enter height of cylinder: ");
        int cylHeight = sc.nextInt();
        System.out.println("Volume of Cylinder: " + vc.volume(radius, cylHeight));

        sc.close();
    }
}