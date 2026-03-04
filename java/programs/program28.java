import java.util.Scanner;

// Custom Exception Class
class MinBalExp extends Exception {
    MinBalExp(String message) {
        super(message);
    }
}

public class program28 {
    public static void main(String[] args) {


       System.out.println("NMAXSCS030 ");
       System.out.println("Yedhukrishna A.M");


        Scanner sc = new Scanner(System.in);
        final int MIN_BALANCE = 1000;

        System.out.print("Enter your account balance: ");
        int balance = sc.nextInt();

        try {
            if (balance < MIN_BALANCE) {
                throw new MinBalExp("Balance is below the minimum required: " + MIN_BALANCE);
            } else {
                System.out.println("Balance is sufficient.");
            }
        } catch (MinBalExp e) {
            System.out.println("Exception caught: " + e.getMessage());
        }

        sc.close();
    }
}