package super_keyword;

public class Main {

    //super = refers to the superclass (parent) of an object.
    //          very simialr to 'this' keyword

    public static void main(String[] args) {
        hero hero1 = new hero("poopindar", 32, "shits and farts loudly");
        hero hero2 = new hero("batman", 41, "is rich");
        person normalPerson = new person("fartesh", 12);

        System.out.println(hero1.toString());
        System.out.println(hero2.toString());
        
        System.out.println(normalPerson.toString());
    }
}
