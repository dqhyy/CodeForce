import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int t = 1; t <= T; t++) {
            int n = sc.nextInt();
            char[] s = new char[n];
            int result = 0;
            String str = sc.next();

            for (int i = 0; i < n; i++) {
                s[i] = str.charAt(i);
            }

            for (int i = 0; i < n; i++) {
                int count = 0;
                if (s[i] == '.') {
                    count += 1;
                    for (int j = i+1; j < n; j++) {
                        if (s[j] == '.')
                            count++;
                        if (s[j] == '#')
                            break;
                    }

                    if (count >= 3) {
                        result = 2;
                        break;
                    }

                    if (count < 3)
                        result += count;

                    i += count - 1;
                }
            }

            System.out.println(result);

        }

        sc.close();
    }
}
