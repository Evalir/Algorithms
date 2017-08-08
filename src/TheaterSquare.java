import java.util.ArrayList;
import java.util.Scanner;
import java.util.List;

public class TheaterSquare {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> nlist = new ArrayList<Integer>();
        while(sc.hasNextInt()) { nlist.add(sc.nextInt()); }
        int[] inputArray = nlist.toArray(new int[]);

        System.out.println("Enter width");
        int x = sc.nextInt();
        System.out.println("Enter height");
        int y = sc.nextInt();
        System.out.println("Enter tile size");
        int z = sc.nextInt();
        int sq_x = 0;
        int sq_y = 0;

        //Check if the width / squares is not an exact div
        if (x % z != 0) {
            sq_x= x / z + 1;
        } else {
            sq_x = x / z;
        }

        //ditto with height
        if (y % z != 0) {
            sq_y = y / z + 1;

        } else {
            sq_y = y / z;
        }

        //Calculate how many squares are needed by multiplying squares needed to fill x and y
        System.out.println("The number of tiles needed to fill the theatre is " + sq_x * sq_y);





    }
}
