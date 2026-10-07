import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            if ((a == b && c % 2 == 0) || a < b) {
                System.out.println("Second");
            } else if ((a == b && c % 2 == 1) || a > b) {
                System.out.println("First");
            }
        }

        sc.close();
    }
}
