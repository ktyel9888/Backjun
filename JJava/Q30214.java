package JJava;

import java.util.Scanner;

public class Q30214 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int first = sc.nextInt();
        int end = sc.nextInt();
        if((end+1)/2 <= first)
            System.out.println("E");
        else System.out.println("H");
    }
}
