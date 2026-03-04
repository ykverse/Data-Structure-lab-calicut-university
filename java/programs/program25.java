import java.util.Scanner;

// Thread to print even numbers
class EvenThread implements Runnable {
    int limit;

    EvenThread(int limit) {
        this.limit = limit;
    }

    public void run() {
        System.out.println("Even numbers:");
        for (int i = 2; i <= limit; i += 2) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}

// Thread to print odd numbers
class OddThread implements Runnable {
    int limit;

    OddThread(int limit) {
        this.limit = limit;
    }

    public void run() {
        System.out.println("Odd numbers:");
        for (int i = 1; i <= limit; i += 2) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}

public class program25 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");


        System.out.print("Enter the limit: ");
        int limit = sc.nextInt();

        // Create Runnable objects
        Runnable even = new EvenThread(limit);
        Runnable odd = new OddThread(limit);

        // Create threads
        Thread evenThread = new Thread(even);
        Thread oddThread = new Thread(odd);

        // Start threads
        evenThread.start();
        oddThread.start();
    }
}