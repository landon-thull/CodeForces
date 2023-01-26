import java.util.Scanner;
import java.lang.Math;

public class BeautifulMatrix {

    // LINK TO PROBLEM: https://codeforces.com/problemset/problem/263/A

    public static void main(String[] args) {
        // init scanner
        Scanner sc = new Scanner(System.in);

        // init x and y
        int x = 0;
        int y = 0;


        // find the 1 by looping through all 25 inputs;
        for (int i = 0; i <= 25; i++) {
            if (sc.nextInt() == 1) {
                // add one so first row = 1
                y = (i / 5) + 1;
                x = (i % 5) + 1;
                break;
            }
        }

        // find distance from 3, 3
        x = Math.abs(x - 3);
        y = Math.abs(y - 3);

        System.out.println(x + y);
    }
}
