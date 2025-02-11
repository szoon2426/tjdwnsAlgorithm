import java.util.Scanner;
import java.util.ArrayList;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> answer = new ArrayList<>();
        while (true) {
            String n = scanner.nextLine();
            if (n.charAt(0) == '.') {
                break;
            }
            boolean error = false;
            Stack<Character> stack = new Stack<>();
            for (int i = 0; i < n.length() && !error; i++) {
                if(n.charAt(i) == '(' || n.charAt(i) == '['){
                    stack.push(n.charAt(i));
                }
                if(stack.empty()){
                    if(n.charAt(i) == ')' || n.charAt(i) == ']'){
                        error = true;
                    }
                }else{
                    if(n.charAt(i) == ')'){
                        if(stack.peek() == '('){
                            stack.pop();
                        }else{
                            error = true;
                        }
                    }else if(n.charAt(i) == ']'){
                        if(stack.peek() == '['){
                            stack.pop();
                        }else {
                            error = true;
                        }
                    }
                }
            }
            if(!stack.empty()){error = true;}
            if (!error) {
                //System.out.println("yes");
                answer.add("yes");
            } else {
                //System.out.println("no");
                answer.add("no");
            }
        }

        for(int i = 0; i<answer.size(); i++){
            System.out.println(answer.get(i));
        }
    }
}
