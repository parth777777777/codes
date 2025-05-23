import java.util.ArrayList;
/**
 * ArrayLists
 */
public class ArrayLists {

    public static void main(String[] args) {
       // ArrayList = 	a resizable array. 
		//				Elements can be added and removed after compilation phase
		//				store reference data types
        ArrayList<String> food = new ArrayList<String>();

        food.add("pizza");
        food.add("sushi");
        food.add("poop");

        food.set(0, "cake");
        food.remove(2);

        for (int i= 0; i< food.size(); i++){
            System.out.println(food.get(i));
        }
        System.out.println();
        food.clear();
        for (int i= 0; i< food.size(); i++){
            System.out.println(food.get(i));
        }
        System.out.println("arraylist containing food names has been cleared");
    }
}