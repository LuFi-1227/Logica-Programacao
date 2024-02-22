import java.util.Scanner;
import java.util.Locale;

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(new Locale("en","US"));
        Scanner scn = new Scanner(System.in);
        int cod1 = scn.nextInt();
        int qty1 = scn.nextInt();
        double price1 = scn.nextDouble();

        int cod2 = scn.nextInt();
        int qty2 = scn.nextInt();
        double price2 = scn.nextDouble();

        System.out.printf("VALOR A PAGAR: %.2f",(price1*qty1 + price2 * qty2));

        scn.close();
    }
}
