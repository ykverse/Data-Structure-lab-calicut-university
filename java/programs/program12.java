import java.util.Scanner;

class Sorter {
    int[] numbers;


    void getNumbers(int n) {
        Scanner sc = new Scanner(System.in);
        numbers = new int[n];
        System.out.println("Enter " + n + " numbers:");
        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextInt();
        }
    }


    void sortNumbers() {
        for (int i = 0; i < numbers.length - 1; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                if (numbers[i] > numbers[j]) {
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }

 
    void displayNumbers() {
        System.out.println("Sorted numbers:");
        for (int num : numbers) {
            System.out.print(num + " ");
        }
    }
}

public class program12 {
    public static void main(String[] args) {

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

        Sorter s = new Sorter();
        Scanner sc = new Scanner(System.in);
        System.out.print("How many numbers:  ");
        int n = sc.nextInt();

        s.getNumbers(n);
        s.sortNumbers();
        s.displayNumbers();
    }
}