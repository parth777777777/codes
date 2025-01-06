package static_variable;

public class Main {
    @SuppressWarnings("unused")
    public static void main(String[] args) {
        friends f1= new friends();
        friends f2 = new friends();
        friends f3 = new friends();
        friends f4 = new friends();

        friends.displayqty();
    }
}
