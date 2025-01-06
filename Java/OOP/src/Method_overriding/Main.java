package Method_overriding;

public class Main {
    public static void main(String[] args) {
        human human = new human();
        parth parth = new parth();
        //method overriding = declaring a method in a child class whihc already exists in a parent class  , done so that a child class can give its own implementation
        human.dance();
        parth.dance();
    }    
}
