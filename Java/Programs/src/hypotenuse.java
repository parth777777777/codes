import java.util.Scanner;

public class hypotenuse {

    public static void main (String[] args){
        double a , b , hyp;
        @SuppressWarnings("resource")
        Scanner scan = new Scanner(System.in);

        System.out.println("Side A: ");
        a= scan.nextInt();
        
        System.out.println("Side B");
        b = scan.nextInt();

        hyp = Math.sqrt((a*a)+(b*b));

        System.out.println("Hyp "+ hyp);
    }

  
}