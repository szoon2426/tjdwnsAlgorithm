import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] walet = new int[n];

        for (int i = 0; i<n; i++){
            int num = scanner.nextInt();
            walet[i] = num;
        }

        int answer = 0;
        for(int i = n-1; i>=0; i--){
            if(k/walet[i]>=1){
                //System.out.printf(walet[i] + "원 짜리 " + k/walet[i] + "개");
                answer+=k/walet[i];
                k = k - walet[i] * (k / walet[i]);
                //System.out.println("남은 돈 " + k);
            }else if(k==0){
                break;
            }
        }
        System.out.println(answer);
    }
}
