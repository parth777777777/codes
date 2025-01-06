import javax.swing.JOptionPane; 

public class GUI {
    public static void main (String[] args){
        
        String name = JOptionPane.showInputDialog("Enter your name");
        JOptionPane.showMessageDialog(null, "Hello "+ name);
        
        int age = Integer.parseInt(JOptionPane.showInputDialog("enter your age"));
        JOptionPane.showMessageDialog(null, "your age is " + age);

        float height = Float.parseFloat(JOptionPane.showInputDialog("enter height cuh"));
        JOptionPane.showMessageDialog(null, "you are " + height + " cm tall ");
    }
}
