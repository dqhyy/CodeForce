import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            String x = sc.next();
            String s = sc.next();

            int count = 0;

            if (x.contains(s)) {
                System.out.println(0);
            } else {

                while (true) {
                    x += x;
                    count++;
                    if (x.contains(s)) {
                        break;
                    }

                    if (n * Math.pow(2, count) >= 2 * m) {
                        count = -1;
                        break;

                    }
                }

                System.out.println(count);
            }
        }

        sc.close();
    }
}
