import java.util.Scanner;

public class Watermelon {

    // LINK TO PROBLEM: https://codeforces.com/problemset/problem/4/A
    public static void main(String[] args) {
        // init scanner
        Scanner sc = new Scanner(System.in);
        // Grab int input
        int i = sc.nextInt();

        // if i > 2 && even print YES; else print NO
        if (i % 2 == 0 && i > 2) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
