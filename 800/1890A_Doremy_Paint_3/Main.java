import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            boolean isGood = true;

            int count = 0;
            int count1 = 0;
            int count2 = 0;

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            for (int i = 0; i < n; i++) {
                boolean different = true;

                for (int j = 0; j < i; j++) {
                    if (a[i] == a[j]) {
                        different = false;
                        break;
                    }
                }

                if (different) {
                    count++;
                }
            }

            if (count > 2) {
                isGood = false;
            } else if (count == 1) {
                isGood = true;
            } else {
                for (int i = 1; i < n; i++) {

                    if (a[i] == a[0]) {
                        count1++; // 1 2
                    } else {
                        count2++; // 1
                    }
                }

                if (count1 - count2 >= 1 || count2 - count1 > 2) {
                    isGood = false;
                }
            }

            String result = isGood ? "YES" : "NO";

            System.out.println(result);

        }

        sc.close();
    }
}
