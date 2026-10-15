import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            char[] s = new char[5];

            String str = sc.next();
            int count = 0;

            for(int i = 0; i < 5; i++){
                s[i] =  str.charAt(i);
                if(s[i] == 'A'){
                    count++;
                }
            }

            if(count > 2){
                System.out.println("A");
            } else{
                System.out.println("B");
            }
        }
        sc.close();
    }
}
