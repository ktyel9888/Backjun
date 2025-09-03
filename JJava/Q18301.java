package JJava;

import java.util.Scanner;

public class Q18301 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a = sc.nextInt(); // 처음 본 쥐 수들(표시됨.)
        b = sc.nextInt(); // 다음으로 본 쥐 수들
        c = sc.nextInt(); // 다음으로 본 쥐들 중 표시된 쥐들 수.
        int ans = (a+1)*(b+1)/(c+1)-1;
        System.out.println(ans);

    }
}

/* 채프먼 예측(Chapman estimator)는 예측 모델로서, 전체에서 감소 및 증가 등 변화가 없을때 일부를 이용해 예측하는 모델이다.
1. 전체의 일부를 랜덤으로 뽑아 표시한다.
2. 뽑은 일부를 다시 전체에 넣고 다시 랜덤으로 뽑는다.
3. 1의 개수를 a, 2의 개수를 b, 1에서 표시된 것을 2에서 다시 뽑은 수를 c라 했을 때, (a+1)*(b+1)/(c+1)-1 해당 식으로 전체의 근사를 예측할 수 있다.
 */