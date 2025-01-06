
public class switch_java {

    public static void main(String[] args){
        //can be used instead of writing multiple if statements
        // switch - statement that allows a variable to be tested for equality against a list of values

        String day = "Friday";

        switch (day){
            case "Sunday": System.out.println("Its Sunday!!");
            break;
            case "Monday": System.out.println("its monday");
            break;
            case "Friday": System.out.println("mama mia");
            break;
            default: System.out.println("what DA EL");
        }
    }
}