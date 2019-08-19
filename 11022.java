import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for(int i = 1; i <= n; i++){
            int a = s.nextInt();
            int b = s.nextInt();
            int sum = a+b;
            System.out.println("Case #"+i+": "+a+" + "+b+" = "+sum);
        }
    }
}