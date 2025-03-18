import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = scanner.next();

        long answer = 0;
        long tmp = 1;
        for(int i = 0; i<n; i++){
            int value = s.charAt(i) - 'a'+1;
            /*System.out.print(value);
            System.out.print('\t');
            System.out.print(tmp);
            System.out.print('\t');
            System.out.print(value*tmp);
            System.out.print('\t');
            */answer = (answer + (value * tmp)%1234567891)%1234567891;
            //System.out.println(answer);
            tmp*=31;
            tmp %= 1234567891;
        }
        System.out.println(answer);

    }
}