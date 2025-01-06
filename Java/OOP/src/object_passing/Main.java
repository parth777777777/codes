package object_passing;

public class Main {
    public static void main(){
    car car1 = new car("bmw");
    car car2 = new car("lambo");
    garage garage =new garage();
    
    garage.park(car1);
    garage.park(car2);
    }
    
    
}
