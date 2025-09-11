package JJava;

import java.util.*;
import java.util.List;

public class Q13698 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String cmd = sc.nextLine();
        List <Integer> cup = new ArrayList <> ();
        cup.add(1); // 작은 공은 1.
        cup.add(0);
        cup.add(0);
        cup.add(9); // 큰 공은 9.
        int tmp;

        for(int i = 0; i < cmd.length(); i++) {
            switch(cmd.charAt(i)){ //명령 넣은만큼 반복.
                case 'A': //A 셔플 규칙 : 1컵과 2컵 교환
                    tmp = cup.get(0);
                    cup.set(0, cup.get(1));
                    cup.set(1, tmp);
                    continue;
                case 'B': //B 셔플 규칙 : 1컵과 3컵 교환
                        tmp = cup.get(0);
                        cup.set(0, cup.get(2));
                        cup.set(2, tmp);
                        continue;
                case 'C': // C 셔플 규칙 : 1컵과 4컵 교환
                            tmp = cup.get(0);
                            cup.set(0, cup.get(3));
                            cup.set(3, tmp);
                            continue;
                case 'D': // D 셔플 규칙 : 2컵과 3컵 교환
                                tmp = cup.get(1);
                                cup.set(1, cup.get(2));
                                cup.set(2, tmp);
                                continue;
                case 'E': // E 셔플 규칙 : 2컵과 4컵 교환
                                    tmp = cup.get(1);
                                    cup.set(1, cup.get(3));
                                    cup.set(3, tmp);
                                    continue;
                case 'F': // F 셔플 규칙 : 3컵과 4컵 교환
                                        tmp = cup.get(2);
                                        cup.set(2, cup.get(3));
                                        cup.set(3, tmp);
                                        continue;
                                        default:
                                            break;


            }
        }
        System.out.println(cup.indexOf(1)+1); // 이후 정확한 컵 위치를 위해 1씩 더해줌.
        System.out.println(cup.indexOf(9)+1); // 마찬가지.
    }
}
