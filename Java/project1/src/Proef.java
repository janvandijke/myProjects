import javax.swing.*;

/**
 * Created by Jan on 2/11/2015.
 */
public class Proef
{
    public static void main(String[] args)
    {
        int a = readNumber();
        int b = readNumber();
        System.out.println(a + b);
    }
    public static int readNumber()
    {
        String message = "Enter a number, plox.";
        String text = JOptionPane.showInputDialog(null, "", "",3);
        int number = Integer.parseInt(text);

        return number;

    }

    public static void showOutput()
    {
        JOptionPane.showMessageDialog(a + b);


    }
}
