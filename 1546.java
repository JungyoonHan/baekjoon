import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        double b = 0, sum = 0;
        double[] array = new double[n];
        for (int i = 0; i < n; i++) {
            double a = s.nextDouble();
            array[i] = a;
        }
        for (int j = 0; j < n; j++) {
            if (array[j] > b) {
                b = array[j];
            }
        }
        for (int k = 0; k < n; k++) {
            array[k] = array[k] / b * 100;
            sum += array[k];
        }
        System.out.printf("%.2f\n", sum / n);
    }
}