import java.util.Scanner;

public class average {

    public static void main(String[] args) {
        double total = 0;
        @SuppressWarnings("resource")
        Scanner scan = new Scanner(System.in);
        double[] arr = new double[62];
        for (int i = 0; i < 62; i++) {
            System.out.print(i + 1 + " ");
            arr[i] = scan.nextDouble();
            System.out.println();
        }

        for (int i = 0; i < 62; i++) {
            total += arr[i];
        }

        double avg = total / 62;
        System.out.println(avg);
    }

}
