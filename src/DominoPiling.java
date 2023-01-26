import java.util.Scanner;

public class DominoPiling {

    // LINK TO PROBLEM: https://codeforces.com/problemset/problem/50/A
    public static void main(String[] args) {
        // init scanner
        Scanner sc = new Scanner(System.in);
        // grab both ints
        int x = sc.nextInt();
        int y = sc.nextInt();

        // calculate area
        int a = x * y;

        // domino area = 2 units^2
        // divide total area by area of domino
        System.out.println(a / 2);
    }
}
