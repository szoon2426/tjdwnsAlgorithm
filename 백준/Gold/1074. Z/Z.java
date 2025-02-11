import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int k = scanner.nextInt() + 1;
        int r = scanner.nextInt() + 1;

        int tmp = n;
        int answer = 0;
        boolean LR = false, UD = false;
        while(tmp>0){        // 가로좌표 위치찾기
            //System.out.println(tmp + "번 째 시도 (" + r + ", " + k +")");
            if(r - Math.pow(2, tmp-1) <= 0){ // r은 왼쪽사분면
                LR = true;
            }else{                          // r은 오른쪽 사분면
                LR = false;
            }

            if(k - Math.pow(2, tmp-1) <= 0){   // k는 윗쪽 사분면
                UD = true;
            }else{                          // k 는 아랫쪽 사분면
                UD = false;
            }

            if(LR && UD){               // 2사분면
                //System.out.printf("2사분면\n");
            }else if(LR && !UD){        // 3사분면
                //System.out.printf("3사분면\n");
                answer += (int)Math.pow(2, 2 * tmp - 2) * 2;
                k = k - (int)Math.pow(2, tmp-1);
            }else if(!LR && UD){        // 1사분면
                //System.out.printf("1사분면\n");
                answer += (int)Math.pow(2, 2 * tmp - 2);
                r = r - (int)Math.pow(2, tmp-1);
            }else if(!LR && !UD){       // 4사분면
                //System.out.printf("4사분면\n");
                answer += (int)Math.pow(2, 2 * tmp - 2) * 3;
                k = k - (int)Math.pow(2, tmp-1);
                r = r - (int)Math.pow(2, tmp-1);
            }
            //System.out.println("answer = " + answer);
            tmp--;
        }
        //answer = answer + r + k - 2;
        System.out.println(answer);
    }
}
