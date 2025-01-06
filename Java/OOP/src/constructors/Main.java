package constructors;

public class Main {

    public static void main(String[] args) {
        
        //create an object :
        animal cat = new animal("cat", "orange", true);

        System.out.println(cat.name);
        System.out.println(cat.color);
        System.out.println(cat.isFriendly);

        System.out.println();

        //create second object :
        animal dog = new animal("dog", "brown", true);

        System.out.println(dog.name);
        System.out.println(dog.color);
        System.out.println(dog.isFriendly);

        dog.eat();
        cat.drink();

    }
}
