package JJava;

import java.util.*;

//백준 16533번 문제 참고.
public class Q16533 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // 솔리테어 수 카드 수 .
        int[] N = new int[n+1];
        int count = 1; // 카드 파일 수. 절대로 카드 파일 수는 0이 될 수 없음. 최소로 남는 카드 파일 수 = 1
        for (int i = 0; i < n; i++) {
            N[i] = sc.nextInt();
        }

        // 만약 j번째 카드랑 j+1번째 카드랑 비교했을 때, j번째가 같거나 더 크다면, j+1번째 카드에 겹친다. = j번째의 카드 숫자 효능을 잃어 j+1번째 카드만 효능을 가진다.
       for(int j = 0; j < n; j++) {
           if(N[j] >= N[j+1]){
               N[j] = 0;
           }
           if(N[j]!=0) count++; // 안 겹친 카드 수 = 효능을 잃지 않은 수 = 0이 아닐 때, count를 더한다.
       }
       System.out.println(count);
    }
}
