package constructors;

public class animal {

    String name ;
    String color;
    boolean isFriendly;

    //creating a constructor:
    animal(String name , String color ,boolean isFriendly){
        this.name = name;
        this.color = color;
        this.isFriendly = isFriendly;
    }

    void eat(){
        System.out.println(this.name + " is eating");
    }

    void drink(){
        System.out.println(this.name + " is drinking");
    }
}

