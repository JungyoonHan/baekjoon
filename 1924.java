import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int sum = 0, z = 0, result = 0;
        int x = s.nextInt();
        int y = s.nextInt();
        s.close();
        for (int i = x; i >= 1; i--) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                sum += 31;
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                sum += 30;
            } else if (i == 2) {
                sum += 28;
            }
        }
        if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) {
            z = 31 - y;
        } else if (x == 4 || x == 6 || x == 9 || x == 11) {
            z = 30 - y;
        } else if (x == 2) {
            z = 28 - y;
        }
        result = sum - z;
        if (result % 7 == 1) {
            System.out.println("MON");
        } else if (result % 7 == 2) {
            System.out.println("TUE");
        } else if (result % 7 == 3) {
            System.out.println("WED");
        } else if (result % 7 == 4) {
            System.out.println("THU");
        } else if (result % 7 == 5) {
            System.out.println("FRI");
        } else if (result % 7 == 6) {
            System.out.println("SAT");
        } else {
            System.out.println("SUN");
        }
    }
}