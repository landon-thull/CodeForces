import java.util.Scanner;
public class BitPlusPlus {

    // LINK TO PROBLEM: https://codeforces.com/problemset/problem/282/A
    public static void main(String[] args) {
        // init scanner
        Scanner sc = new Scanner(System.in);

        // get count of inputs
        int c = sc.nextInt();
        // advance pointer
        sc.nextLine();

        // init counter
        int x = 0;

        // loop through c times
        for (int i = 0; i < c; i++) {
            // grab current line;
            String l = sc.nextLine();

            if (l.charAt(1) == '+') {
                x++;
            }  else if (l.charAt(1) == '-') {
                x--;
            }
        }

        System.out.println(x);

    }
}
