
import java.util.Scanner;

public class basic_syntax {

    public static void main(String[] args) {
        System.out.println("poop");
        System.out.println(5 + 88 + 9 * 5);

        String name;
        int age;
        String food;
         //taking input.
            @SuppressWarnings("resource")
            Scanner scanner = new Scanner(System.in);       
            System.out.println("What is your name?");
            name = scanner.nextLine();
            System.out.println("whats your age");
            age = scanner.nextInt();
            scanner.nextLine(); //to cleear scannner \n created during int scnning but it and make sure code is exevuted.
            System.out.println("whats your favourite food?");
            food = scanner.nextLine();
        

        System.out.println("hello " + name);
        System.out.println("your age is " + age);
        System.out.println("your fav food is " + food);

    }
    //this is a class , with the name 'first'
    //classes can have methods.
    //every program need a main 'method'.
    // println() is a method . automatically adds a new line no need for \n like in C . 
    /*multiple line comments
     * poopy
     * poop
     */

}
