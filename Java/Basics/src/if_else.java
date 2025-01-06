
public class if_else {

    public static void main(String[] args) {
        int x = 12, y = 14;

        if (x > y) {
            System.out.println("i like poop!");
        } else if (x == y) {
            System.out.println("man i love poop");
        } else {
            System.out.println("fuck the monarchy");
        }

        //short hand if else:
        //variable   = (condition) ? ifExpressionTrue : ifExpressionFalse
        int time = 9;
        String greeting = (time < 10) ? "Good morning" : "meow";
        System.out.println(greeting);
    }
}
