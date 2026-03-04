import java.util.Scanner;

public class program3 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

        System.out.print("Enter the limit for the Fibonacci series: ");
        int limit = input.nextInt();

        int firstTerm = 0;
        int secondTerm = 1;

        System.out.println("Fibonacci Series up to " + limit + ":");


        if (limit >= 0) {
            System.out.print(firstTerm);
        }
        if (limit >= 1) {
            System.out.print(", " + secondTerm);
        }


        int nextTerm = firstTerm + secondTerm;
        while (nextTerm <= limit) {
            System.out.print(", " + nextTerm);
            firstTerm = secondTerm;
            secondTerm = nextTerm;
            nextTerm = firstTerm + secondTerm;
        }
        System.out.println(); 
        input.close();
    }
}