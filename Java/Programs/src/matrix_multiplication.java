import java.util.Scanner;
/**
 * matrix_multiplication
 */
public class matrix_multiplication {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int row1 , col1 , row2, col2 ;

        System.out.println("number of rows in matrix A : ");
        row1 = scan.nextInt();
        System.out.println("number of columns in matrix A : ");
        col1 = scan.nextInt();
        System.out.println("number of rows in matrix B: ");
        row2 = scan.nextInt();
        System.out.println("number of columns in matrix B: ");
        col2 = scan.nextInt();

        if(col1 != row2 ){
            System.out.println("given matrices cannot be multiplied ");
        }
        else{
            int a[][]= new int[row1][col1];
            int b[][]= new int[row2][col2];
            int c[][]= new int[row1][col2];

            System.out.println("enter values for matrix A : \n");
            for (int i = 0; i<row1 ; i++){
                for (int j =0 ; j<col1 ; j++){
                    a[i][j] = scan.nextInt();
                }
            }
            System.out.println("enter values for matrix B : \n");
            for (int i = 0; i<row2 ; i++){
                for (int j =0 ; j<col2 ; j++){
                    b[i][j] = scan.nextInt();
                }
            }

            System.out.println("Matrix A*B is: ");
            for(int i= 0 ; i<row1; i++){
                for(int j = 0 ; j < col2 ; j++){
                    c[i][j] = 0;
                    for (int k =0 ; k<col1; k++){
                        c[i][j] += a[i][k] * b[k][j];
                    }
                    System.out.print(c[i][j]+ " " );
                }
                System.out.println();
            }
        }
        scan.close();
    }
}