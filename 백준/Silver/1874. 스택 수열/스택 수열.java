import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int  n = scanner.nextInt();

        boolean[] visited = new boolean[n+1];
        ArrayList<Character> answer = new ArrayList<>();

        int tmp = 0;
        boolean checked = false;
        for(int i = 0; i<n; i++){
            int a = scanner.nextInt();

            if(checked){continue;}

            if(a>tmp){
                for(int j = tmp+1; j<=a; j++){
                    if(!visited[j]){answer.add('+');}
                }
                answer.add('-');
            }else{
                for(int j = tmp-1; j>=a+1; j--){
                    if(!visited[j]){
                        checked = true;
                    }
                }
                answer.add('-');
            }
            visited[a] = true;
            tmp = a;
        }


        if(checked) {
            System.out.printf("NO");
        }
        else{
            for(int i = 0; i<answer.size(); i++){
                System.out.println(answer.get(i));
            }
        }
    }
}
