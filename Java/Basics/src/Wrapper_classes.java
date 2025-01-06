/**
 * Wrapper_classes
 */
public class Wrapper_classes {

    @SuppressWarnings("unused")
    public static void main(String[] args) {
        // WRAPPER CLASS = provides a way to use primitive data types  as refernce data types;
        //                 Reference data types contain useful methods;
        //                 Can be used with collections (ex. Arraylist)
        
        //primitive //wrapper
        //--------- //-------
        // boolean  Boolean
        // char     Character
        // int      Integer
        // double   Double
        
    // autoboxing = the automatic conversion that the Java compiler makes between the primitive types and their corresponding object wrapper classes
    // unboxing = the reverse of autoboxing. Automatic conversion of wrapper class to primitive

        Boolean a = true;
        Character b = 'b';
        Integer c = 12;
        Double d = 12.1223d;
        String e = "String is a reference data type ";

        //now we can use methods on these data types
        System.out.println(c.compareTo(122));
        System.out.println(e.length());
        
        

    }
}