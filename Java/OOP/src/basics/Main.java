package basics;


public class Main {

    public static void main(String[] args) {
        car myCar1 = new car();
        car myCar2 = new car();

        System.out.println(myCar1.make);
        System.out.println(myCar2.make); 
        //currently both cars (objects) have same attrributes and methods ,. learn consturctors to know how to contruct a car 
        myCar2.drive();
        myCar2.brake();
    }
}