import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            int x = sc.nextInt();
            int[] a = new int[n];

            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }

            int min = a[0] - 0;

            for (int j = 0; j < n-1; j++) {
                if (min < a[j + 1] - a[j]) {
                    min = a[j + 1] - a[j];
                }
            }

            if (min < 2 * (x - a[n - 1]))
                min = 2 * (x - a[n - 1]);

            System.out.println(min);
        }

        sc.close();
    }
}