
public class type_casting {

    public static void main(String[] args) {
        /*Java Type Casting:

        Type casting is when you assign a value of one primitive data type to another type
        In Java, there are two types of casting:
        1-Widening Casting (automatically) - converting a smaller type to a larger type size
        byte -> short -> char -> int -> long -> float -> double
        2-Narrowing Casting (manually) - converting a larger type to a smaller size type
        double -> float -> long -> int -> char -> short -> byte  */

        //widening casting :
        int num = 23;
        double doub = num; //automatically casting int into double
        System.out.println(doub + " from " + num);

        //narrowing casting :
        //Narrowing casting must be done manually by placing the type in parentheses () in front of the value:
        double biggie = 1212.41212d;
        int smallpp = (int) biggie;
        System.out.println(smallpp + " from " + biggie);
    }

}
