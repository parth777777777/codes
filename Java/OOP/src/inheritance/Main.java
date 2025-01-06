package inheritance;

public class Main {
   // inheritance == the process where one class aquires the attributes and methods of another 
   public static void main(String[] args) {
    
   
    car myCar = new car();
    bike myBike = new bike();

    myCar.go();
    myBike.go();
    System.out.println();
    myCar.stop();
    myBike.stop();
    System.out.println();
    System.out.println(myCar.speed);
    System.out.println(myBike.speed);
    System.out.println("car has "+myCar.wheels+" wheels");
    System.out.println("bike has "+myBike.wheels+" wheels");
    System.out.println(myCar.hasAirbags);
    System.out.println(myBike.isSportsBike);
    
    }

}
