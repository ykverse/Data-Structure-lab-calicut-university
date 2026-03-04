import java.util.Scanner;

class program2 {
    public static void main(String[] args) {
     
      Scanner sc = new Scanner(System.in);
   
        int a, b, sum, diff, prod, quo, rem;
        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

      System.out.println("Enter the first number: ");
        a = sc.nextInt();
          
      System.out.println("Enter the Secound number: ");

        b = sc.nextInt();


        sum = a + b;
        diff = a - b;
        prod = a * b;
        quo = a / b;
        rem = a % b;


        System.out.println("Sum = " + sum);
        System.out.println("Difference = " + diff);
        System.out.println("Product = " + prod);
        System.out.println("Quotient = " + quo);
        System.out.println("Remainder = " + rem);

    sc.close();

    }
}