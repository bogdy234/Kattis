package Rijeci;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int k, nrA = 1, nrB = 0, nrBi, nrAi;
        Scanner sc = new Scanner(System.in);
        k = sc.nextInt();
        for (int i = 1; i <= k; i++) {
            nrBi = nrB;
            nrAi = nrA;
            nrA -= nrAi;
            nrA +=nrBi;
            nrB+=nrAi;
        }
        System.out.println(nrA+" "+nrB);
    }
}
