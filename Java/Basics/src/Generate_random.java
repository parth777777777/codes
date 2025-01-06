import java.util.Random;

public class Generate_random {

    public static void main(String[] args) {
        Random random_num = new Random();

        int x = random_num.nextInt(0, 100);
        System.out.println(x);

        boolean y = random_num.nextBoolean();
        System.out.println(y);

        double z = random_num.nextDouble();
        System.out.println(z); // only values b/w 0-1
        System.out.println(z*100);// double value form 0-100 
    }
}