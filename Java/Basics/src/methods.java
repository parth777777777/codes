public class methods {

    public static void main(String[] args) {
       System.out.println(sum(12,13));
       String name = "Part";
       greetings(name);
    } 
    
    static int sum(int x , int y){
        return x+y;  
    }

    static void greetings(String name){
        System.out.println("Hello "+name);

    }

}