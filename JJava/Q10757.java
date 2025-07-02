package JJava;

import java.math.BigInteger;
import java.util.Scanner;


public class Q10757 {
    public static void main(String[] args) {
        //첫째 줄에 A와 B가 주어진다. (0 < A,B < 1010000)
        Scanner sc = new Scanner(System.in);
        //int < long< double 순이지만, 출력 예시와 동일하게 E로 정리하지 않고 작성하기 위해 BigInteger 사용.
        BigInteger A = sc.nextBigInteger();
        BigInteger B = sc.nextBigInteger();
        System.out.println (A.add(B)); // 단순하게 A+B가 아니라 A.add(B)를 사용해야함. BigInteger의 경우 문자열 취급!
    }
}
