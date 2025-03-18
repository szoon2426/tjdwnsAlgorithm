import java.lang.Math;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = scanner.next();

        long answer = 0;
        int tmp = 0;
        for(int i = 0; i<n; i++){
//            System.out.print(s.charAt(i)-'a'+1);
//            System.out.print('\t');
//            System.out.print(Math.pow(31,tmp));
//            System.out.print('\t');
//            System.out.print((s.charAt(i) - 'a'+1) * Math.pow(31,tmp));
//            System.out.print('\t');
            answer += (s.charAt(i) - 'a'+1) * Math.pow(31,tmp++);
//            System.out.println(answer);
        }
//        System.out.println();
        System.out.println(answer);

    }
}