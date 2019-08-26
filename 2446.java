import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for (int i = n; i > 1; i--) {
            for (int j = n; j > i; j--) {
                System.out.print(" ");
            }
            for (int k = 2 * i - 1; k > 0; k--) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int l = 1; l <= n; l++) {
            for (int m = n; m > l; m--) {
                System.out.print(" ");
            }
            for (int p = 0; p < 2 * l - 1; p++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}