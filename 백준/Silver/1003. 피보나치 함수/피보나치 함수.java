import java.util.Scanner;

class Ob{
    int zero = 0;
    int one = 0;
}

public class Main {
    static Ob[] obs = new Ob[41];;

    static void setting(){
        for(int i = 0; i < 2; i++){
            obs[i] = new Ob();
        }
        obs[0].zero = 1;
        obs[1].one = 1;
    }

    static Ob fib(int n) {
        if(obs[n] == null){
            obs[n] = new Ob();

            Ob ob1 = fib(n-1);
            Ob ob2 = fib(n-2);

            obs[n].zero = ob1.zero + ob2.zero;
            obs[n].one = ob1.one + ob2.one;
        }
        return obs[n];
    }

    public static void main(String[] args) {
        setting();
        Scanner scanner = new Scanner(System.in);
        StringBuffer sb = new StringBuffer();
        int n = scanner.nextInt();

        for(int i = 1; i <= n; i++) {
            int a = scanner.nextInt();
            Ob ob = fib(a);
            sb.append(ob.zero).append(" ")
                    .append(ob.one).append("\n");
        }

        System.out.print(sb);
    }
}
