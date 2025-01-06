
public class math {

    public static void main(String[] args) {
        int x = 12, y = 15;
        System.out.println(Math.max(x, y));
        System.out.println(Math.min(x, y));

        System.out.println(Math.sqrt(114));

        System.out.println(Math.abs(-12));

        System.out.println(Math.random());//gives a random number between 0-1
        int random_num = (int) (Math.random() * 101); //between 0-100
        System.out.println(random_num);

    }
}
