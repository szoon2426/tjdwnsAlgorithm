import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;

public class Main {
    /*static HashSet<Integer> set = new HashSet<>();
    static List<Integer> d = Arrays.asList(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);
    *//*static boolean check(int number){
        return set.contains(number);
    }
    static void add(int number){
       set.add(number);
    }

    static void remove(int number){
        set.remove(number);
    }

    static void toggle(int number){
        if(check(number)){
            remove(number);
        }else{
            add(number);
        }
    }

    static void all(){
        set = new HashSet<>(d);
    }

    static void empty(){
        set.clear();
    }*/

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = scanner.nextInt();
        HashSet<Integer> set = new HashSet<>();
        List<Integer> d = Arrays.asList(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);


        for(int i = 0; i<n; i++){
            String input = scanner.next();
            if(input.equals("all")){ set = new HashSet<>(d); }
            else if(input.equals("empty")){ set.clear(); }
            else{
                int number = scanner.nextInt();
                if(input.equals("add")){ set.add(number); }
                if(input.equals("check")){
                    if(set.contains(number)){sb.append(1);}
                    else{ sb.append(0); }
                    sb.append('\n');
                }
                if(input.equals("remove")){ set.remove(number); }
                if(input.equals("toggle")){
                    if(set.contains(number)){
                        set.remove(number);
                    }else{
                        set.add(number);
                    }
                }
            }
        }

        System.out.println(sb);

    }

}