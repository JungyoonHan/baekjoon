import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for (int i = n; i > 0; i--) {
            for (int j = i; j < n; j++) {
                System.out.print(" ");
            }
            for (int k = 2 * i - 1; k > 0; k--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}