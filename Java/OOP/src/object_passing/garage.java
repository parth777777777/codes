package object_passing;

/**
 * garage
 */
public class garage {
    //we can pass objects as arguemtns in a method . and then call it via class object in which the method is defined.
    void park(car car){
        System.out.println(car.name+" is parked in the garage");
    }
}