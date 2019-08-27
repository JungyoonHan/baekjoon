import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int sum = 0;
        while (n > 0) {
            if (n % 5 == 0) {
                sum++;
                n -= 5;
            } else if (n % 3 == 0) {
                sum++;
                n -= 3;
            } else if (n > 5) {
                n -= 5;
                sum++;
            } else {
                sum = -1;
                break;
            }
        }
        System.out.println(sum);
    }
}