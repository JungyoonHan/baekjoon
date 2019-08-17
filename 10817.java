import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();
        if ((a >= b && a <= c) || (a >= c && a <= b)) {
            System.out.println(a);
        } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
            System.out.println(b);
        } else if ((c >= a && c <= b) || (c >= b && c <= a)) {
            System.out.println(c);
        }
    }
}