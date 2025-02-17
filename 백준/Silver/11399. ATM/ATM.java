import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] intArr = new int[n];
        for(int i = 0; i<n; i++){
            int p = scanner.nextInt();
            intArr[i] = p;
        }
        Arrays.sort(intArr);
        int answer = 0;
        for(int i = 0; i<intArr.length; i++){
            answer += intArr[i] * (intArr.length-i);
        }
        System.out.println(answer);
    }
}
