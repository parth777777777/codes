package static_variable;

public class friends {
    static int qtyFriend;
// static = modifier . A singel cope of variable or method is created and shared.
//                  the class "owns" the static member
    friends(){
        qtyFriend++; //every time this constructor is called , qtyFriend will increase by 1
        //if qtyFriends wasnt static then each object constructed would have their own +1 qtyFriend instead of sharing a single static int variable
    }

    static void displayqty(){
        System.out.println("you have "+qtyFriend+" friends");
    }
}