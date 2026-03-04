import java.util.Scanner;

public class program27 {
    public static void main(String[] args) {

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");


        Scanner sc = new Scanner(System.in);

        try {
            // Input two numbers
            System.out.print("Enter numerator: ");
            int numerator = sc.nextInt();

            System.out.print("Enter denominator: ");
            int denominator = sc.nextInt();

            // Division operation
            int result = numerator / denominator;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            // Handle division by zero
            System.out.println("Error: Cannot divide by zero!");
        }

        System.out.println("Program continues after exception handling.");
        sc.close();
    }
}