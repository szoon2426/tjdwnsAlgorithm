import java.util.ArrayList;
import java.util.HashMap;
import java.util.Objects;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        HashMap<String, Integer> map = new HashMap<>();
        StringBuilder sb = new StringBuilder();
        int n = scanner.nextInt();
        String[] p = new String[n+1];
        int m = scanner.nextInt();

        for(int i = 1; i<=n; i++){
            String name = scanner.next();
            map.put(name, i);
            p[i] = name;
        }
        for(int i = 0; i<m; i++){
            String name = scanner.next();
            if('0'<=name.charAt(0)&&name.charAt(0) <= '9'){
                sb.append(p[Integer.parseInt(name)]);
            }else /*if('A' <= name.charAt(0) && name.charAt(0) <= 'Z')*/{
                sb.append(map.get(name));
            }

            sb.append('\n');
        }
        System.out.println(sb);


    }
}
