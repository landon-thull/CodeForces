import java.util.Scanner;

public class NextRound {

    // LINK TO PROBLEM: https://codeforces.com/problemset/problem/158/A
    public static void main(String[] args) {
        // init scanner
        Scanner sc = new Scanner(System.in);
        // get first and second int
        int a = sc.nextInt();
        int b = sc.nextInt();

        int[] c = new int[a];

        // place all the scores in an array
        for (int i = 0; i < a; i++) {
            c[i] = sc.nextInt();
        }

        int score = c[b - 1];
        int countOfPlayers = 0;
        for (int j = 0; j < a; j++) {
            // increment counter if int >= score, and score is greater than 0
            if (c[j] >= score && (score != 0)) {
                countOfPlayers++;
            } else if (c[j] < score) {
                break;
            } else if (c[j] > 0) {
                countOfPlayers++;
            }
        }

        System.out.println(countOfPlayers);


    }
}
