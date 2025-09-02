package JJava;

import java.util.Scanner;

public class Q27959 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt(); // 100원의 개수
        int chocobar = sc.nextInt(); // 초코바 가격
        if(count * 100 >= chocobar) // 초코바 가격이 소지한 금액보다 적거나 같다면 Yes 아니면 No.
            System.out.print("Yes");
        else System.out.print("No");
    }
}
