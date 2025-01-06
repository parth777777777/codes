import java.util.Scanner;

public class arrays {

    public static void main(String[] args) {
        String[] array = { "pp", "hello", "man waht ", "wowowowowo" };
        for (String i : array) {
            System.out.println(i);
        }

        // intialize arrays with size :
        int list[] = new int[/* size */12];
        list[0] = 2;

        // 2D arrays :
        int[][] matrix = new int[3][3];

        Scanner input = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print("index "+i+", "+j+" :");
                matrix[i][j] = input.nextInt();
            }
        }
        for (int i = 0; i < 3; i++) {
            System.out.println();
            for (int j = 0; j < 3; j++) {
                System.out.print(matrix[i][j] + " ");

            }
        }
        input.close();
    }
}
