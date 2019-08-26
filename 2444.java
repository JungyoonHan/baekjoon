import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = n - i; j > 0; j--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int l = n - 1; l > 0; l--) {
            for (int m = l; m < n; m++) {
                System.out.print(" ");
            }
            for (int o = 2 * l - 1; o > 0; o--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}