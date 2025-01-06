package array_of_objects;

public class Main {
    public static void main(String[] args) {
        
    food food1 = new food("CATMEOW",8);
    food food2 = new food("DOGWOOF", 7);

    //create an array of objects :
    food[] fridge = new food[2];
    fridge[0] = food1;
    fridge[1] = food2;
    for(int i = 0; i<2 ; i++){ 
        System.out.println(fridge[i].name);
        System.out.println(fridge[i].Rating);
    }
}

}
