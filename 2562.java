import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int max = 0;
        int max_count = 0;
        for(int i = 1; i <= 9; i++){
            int n = s.nextInt();
            if(n >= max){
                max = n;
                max_count = i;
            }
        }
        System.out.println(max);
        System.out.println(max_count);
    }
}