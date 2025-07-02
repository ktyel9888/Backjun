package JJava;

import java.util.Scanner;
import java.math.*;

public class Q27433 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); // 0 <= N <= 20
        long A = factorial(N);// long 타입으로 받기
        //long B = Repetition(N)
        System.out.println(A);
        //System.out.println(B);
    }
    public static long factorial(int N) {
        if (N == 0) return 1;
        return N * factorial(N - 1);
    }

    public static long Repetition(int N) {
        int result = 1;
        for (int i = 1; i <= N; i++) {
            result *= i; // 1에서부터 2, 3 4를 곱한다.
        } // 원래는 역으로 10부터 하려 했으니 나중에 해보자.
        return result;
    }
}
