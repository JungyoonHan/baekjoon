import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for (int i = n; i > 0; i--) {
            for (int j = n; j >= i; j--) {
                System.out.print("*");
            }
            for (int k = 2 * (i - 1); k > 0; k--) {
                System.out.print(" ");
            }
            for (int l = n; l >= i; l--) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int m = n - 1; m > 0; m--) {
            for (int p = m; p > 0; p--) {
                System.out.print("*");
            }
            for (int q = 2 * n; q > 2 * m; q--) {
                System.out.print(" ");
            }
            for (int r = m; r > 0; r--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}