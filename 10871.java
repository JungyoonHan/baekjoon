import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int a = s.nextInt();
        for (int i = 1; i <= n; i++) {
            int b = s.nextInt();
            if (b < a) {
                System.out.print(b + " ");
            }
        }
        System.out.println();
    }
}