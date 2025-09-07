package JJava;

import java.util.Scanner;

public class Q11720 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        String num = sc.next();
        int sum = 0;
        for (int i = 0; i < count; i++) {
            int tmp = Integer.parseInt(String.valueOf(num.charAt(i))); // 문자열을 숫자로 변환. 꼭 기억할것!!
            sum += tmp; // 이후 하나하나 배열마다 저장된 값을 sum에 더해주기만 하면 끝.
        }
        System.out.println(sum);
    }
}
