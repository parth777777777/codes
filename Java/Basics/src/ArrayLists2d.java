import java.util.*;

public class ArrayLists2d {

    public static void main(String[] args) {
        ArrayList<String> name = new ArrayList<>();
        name.add("parth");
        name.add("fart");
        name.add("meow");

        ArrayList<Integer> percentages = new ArrayList<>();
        percentages.add(92);
        percentages.add(64);
        percentages.add(81);

        @SuppressWarnings("rawtypes")
        ArrayList<ArrayList> Profile = new ArrayList<>();
        Profile.add(name);
        Profile.add(percentages);

        System.out.println(Profile);

        }
    }
