import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int n = sc.nextInt();

            boolean result = true;

            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if (arr[i] > n || arr[0] > 1) {
                    result = false;
                    break;
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (arr[i] == arr[j]) {
                        result = false;
                        break;
                    }
                }
            }

            String s = result ? "YES" : "NO";
            System.out.println(s);

        }

        sc.close();
    }
}
