package JJava;

import java.util.*;

public class Q2475 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //첫째 줄에 고유번호의 처음 5자리의 숫자들이 빈칸을 사이에 두고 하나씩 주어진다.
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int D = sc.nextInt();
        int E = sc.nextInt();
        //검증수는 고유번호의 처음 5자리에 들어가는 5개의 숫자를 각각 제곱한 수의 합을 10으로 나눈 나머지이다.
        int P =  (A*A + B*B + C*C + D*D + E*E) % 10;
        System.out.println(P);

    }
}
