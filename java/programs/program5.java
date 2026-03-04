import java.util.Scanner;

class program5 {
    public static void main(String args[]) {

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");
       
        Scanner sc = new Scanner(System.in);


        int a, b, c;
        double p, area;

     
        System.out.print("Enter 3 sides : ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

       
        if ((a < b + c) && (b < a + c) && (c < a + b)) {

          
            if ((a == b) && (b == c))
                System.out.println("Equilateral triangle");

        
            else if ((a == b) || (b == c) || (c == a))
                System.out.println("Isosceles triangle");

             
            else
                System.out.println("Scalene triangle");

            
            p = (a + b + c) / 2;
            area = Math.sqrt(p * (p - a) * (p - b) * (p - c));

           
            System.out.println("Area of triangle is = " + area);
        }
        else {
            System.out.println("Cannot form a triangle");
        }
    }
}