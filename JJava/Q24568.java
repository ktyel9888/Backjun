package JJava;

import java.util.Scanner;

public class Q24568 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int reg = sc.nextInt(); // 8개 컵케이크 들어있는 박스.
        int small  = sc.nextInt(); // 3개 컵케이크 들어있는 박스.
        int answer = (reg*8+small*3)-28; // 28명에게 나눠주고 남는 나머지.
        System.out.println(answer);
    }
}
