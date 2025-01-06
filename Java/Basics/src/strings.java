
public class strings {

    public static void main(String[] args) {
        //Strings in java are objects. which contain methods that can perform certain operations on strings
        String txt = "ffsdkfhDSakAFFDSGSGjsdhfj";
        System.out.println("length of string : " + txt.length());
        System.out.println("all upper case " + txt.toUpperCase());
        System.out.println("all lower case " + txt.toLowerCase());
        //finding the first occurence of a specified text in a string:
        String sample = "locate where meow is meow meow";
        System.out.println(sample.indexOf("meow"));

        //concat() method
        System.out.println(txt.concat(sample));
        
        //boolean result = name.equalsIgnoreCase("bro");
        //int result = name.length();
        //char result = name.charAt(0);
        //int result = name.indexOf("o");
        //boolean result = name.isEmpty();
        //String result = name.toUpperCase();
        //String result = name.toLowerCase();
        //String result = name.trim();
        //String result = name.replace('o', 'a');
        //System.out.println(result); 

    }
}
