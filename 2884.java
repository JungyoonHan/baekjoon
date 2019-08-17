import java.util.Scanner;
class Main{
  public static void main(String[] args){
    Scanner s = new Scanner(System.in);
    int a = s.nextInt();
    int b = s.nextInt();
    if (b >= 45){
      b = b-45;
    }
    else{
      b = 60-(45-b);
      if(a == 0){
        a = 23;
      }
      else{
        a--;
      }
    }
    System.out.println(a+" "+b);
  }
}
