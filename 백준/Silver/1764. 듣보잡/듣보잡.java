import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> list = new ArrayList<String>();
        StringBuffer sb = new StringBuffer();
        int n = scanner.nextInt();
        int m = scanner.nextInt();

        HashSet<String> h = new HashSet<>();

        int answer = 0;

        for (int i = 1; i <= n; i++) {
            String name = scanner.next();
            h.add(name);
        }
        for (int i = 1; i <= m; i++) {
            String name = scanner.next();
            if (h.contains(name)) {
                answer++;
                list.add(name);
            }
        }
        Collections.sort(list);
        for(int i = 0; i<list.size(); i++){
            sb.append(list.get(i)).append('\n');
        }
        System.out.println(answer);
        System.out.print(sb);
    }
}
