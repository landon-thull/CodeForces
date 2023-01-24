import java.util.Scanner;

public class Team {

    // LINK TO PROBLEM: https://codeforces.com/problemset/problem/231/A
    public static void main(String[] args) {
        // init scanner
        Scanner sc = new Scanner(System.in);
        // grab first int value
        int i = sc.nextInt();
        // advance cursor
        sc.nextLine();

        // init counter
        int t = 0;

        // go through i number of lines
        for (int j = 0; j < i; j++) {
            //grab the current line
            String c = sc.nextLine();

            // count occurences of 1
            long o = c.chars().filter(ch -> ch == '1').count();

            // if o > 1, increment counter
            if (o > 1) {
                t++;
            }

        }

        System.out.println(t);
    }
}
