package JJava;

import java.util.*;

public class Q14681 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        if(x>0 && y>0) System.out.println("1"); //x값과 y값이 양수면 제1사분면
        else if(x<0 && y>0) System.out.println("2"); //x값이 음수, y값이 양수면 제2사분면
        else if(x<0 && y<0) System.out.println("3"); //x값이 음수, y값이 음수면 제3사분면
        else if(x>0 && y<0) System.out.println("4"); //x값이 양수, y값이 음수면 제4사분면


    }
}
