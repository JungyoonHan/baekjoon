import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        while(true){
            int a = s.nextInt();
            int b = s.nextInt();
            if(a == 0 && b == 0){
                break;
            }
            else{
                int sum = a+b;
                System.out.println(sum);
            }
        }
    }
}