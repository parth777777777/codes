
public class variables_and_datatype {

    public static void main(String[] args) {
        //type variable_name = value;
        String name = "parth";
        System.out.println("Hello " + name);

        int myNum = 19;
        float myFloat = 12.14f;
        double myDoub = 12.1331333131d;
        char myChar = 'c';
        boolean myBool = true;

        System.out.println("the num is = " + myNum);
        System.out.println(myChar);
        String name_age = "the name is " + name + " and age is " + myNum;
        System.out.println(name_age);
        System.out.println(myBool + " " + myChar + " " + myDoub + " " + myFloat);

        //declaring multiple variables.
        int x = 12, y = 14, z = 17;
        System.out.println(x + y + z);
        //or 
        int a, b, c;
        a = b = c = 50;
        System.out.println(a + b + c);

    }
}
