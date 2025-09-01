package JJava;

import java.util.*;


public class Q10808 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // 스캐너 깔아두기.
        String s = sc.nextLine(); // 입력 받을 스트링.
        int [] alphabet = new int[26]; // 알파벳 수만큼의 길이를 가진 배열.-> 알파벳 순서 대로 개수를 물어본 답 출력을 위함.
        for(int i = 0; i < s.length(); i++) { // s의 길이만큼 반복
            for (int j = 0; j < alphabet.length; j++) // 알파벳 배열만큼 이중 반복 => s에서 순환하여, 알파벳들 하나하나 검토.
                if (s.charAt(i) == j + 'a') {
                    alphabet[j]++;
                } // 만약 해당 글자가, j+'a'(아스키코드로 97)에 해당한다면, j에 추가.

        }
        /*
        for (int i = 0; i < s.length(); i++) {
        int index = s.charAt(i) - 'a'; // 'a'면 0, 'b'면 1 ... 'a' - 'a' = 0임을 이용. 아스키 코드.
        alphabet[index]++;             // 해당 인덱스의 값을 1 증가
        }
         */
        for (int i = 0; i < alphabet.length; i++) {
            System.out.print(alphabet[i]);
            if (i < alphabet.length - 1) { // 마지막에 공백 생기는 것을 방지.
                System.out.print(" ");
            }
        }
    }
}
