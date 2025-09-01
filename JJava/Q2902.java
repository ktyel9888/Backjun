package JJava;

import java.util.*;

public class Q2902 {
    public static void main(String[] args) {
        //입력은 한줄로, 최대 100글자의 영어 알파벳 대문자, 소문자, 그리고 하이픈으로 단어별로 나눈다. 첫 글자는 항상 대문자.
        Scanner sc = new Scanner(System.in);
        String list = sc.nextLine();
        String answer = ""; // 답 출력용 변수
        for(int i=0; i<list.length(); i++){
            if(list.charAt(i)<=90 && list.charAt(i)!=45){
                answer += list.charAt(i);
            }
        }// 아스키 코드에서는 알파벳 대문자는 65~90, 소문자는 97~122까지 이며, 하이픈은 45이기에 조건문 사용.
        System.out.println(answer);
    }

}
