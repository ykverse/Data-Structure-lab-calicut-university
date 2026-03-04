public class program8 {
    public static void main(String[] args) {

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

        boolean[] values = {true, false};

        System.out.println("Verifying De Morgan's Laws:\n");

        for (boolean A : values) {
            for (boolean B : values) {

                boolean left1 = !(A && B);
                boolean right1 = (!A || !B);

                boolean left2 = !(A || B);
                boolean right2 = (!A && !B);

                System.out.println("A = " + A + ", B = " + B);
                System.out.println("Law 1: !(A && B) = " + left1 +
                                   " | (!A || !B) = " + right1 +
                                   " → " + (left1 == right1));

                System.out.println("Law 2: !(A || B) = " + left2 +
                                   " | (!A && !B) = " + right2 +
                                   " → " + (left2 == right2));

                
            }
        }
    }
}
