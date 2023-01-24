import java.util.Scanner;

public class WayTooLongWords {

    // LINK TO PROBLEM: https://codeforces.com/problemset/problem/71/A
    public static void main(String[] args) {
        // init scanner
        Scanner sc = new Scanner(System.in);
        // grab first int
        int c = sc.nextInt();
        //advance cursor
        sc.nextLine();

        // iterate through each input
        for (int i = 0; i < c; i++) {
            // grab current word
            String w = sc.nextLine();

            // if word length <= 10, print word
            if (w.length() <= 10) {
                System.out.println(w);
            } else {
                // print first letter, count of letters excluding first and last, last letter
                System.out.println(w.charAt(0) + "" + (w.length() - 2) + "" + w.charAt(w.length() - 1));
            }
        }
    }
}
