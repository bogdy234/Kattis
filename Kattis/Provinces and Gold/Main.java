package Provinces.and.Gold;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int goldCards,silverCards,copperCards;
        goldCards=sc.nextInt();
        silverCards=sc.nextInt();
        copperCards=sc.nextInt();
        int handValue;
        handValue=goldCards*3+silverCards*2+copperCards;
        if (handValue>=8)
            System.out.println("Province or Gold");
        else if (handValue >=6)
            System.out.println("Duchy or Gold");
        else if (handValue==5)
            System.out.println("Duchy or Silver");
        else if (handValue>=3)
            System.out.println("Estate or Silver");
        else if (handValue>=2)
            System.out.println("Estate or Copper");
        else System.out.println("Copper");
    }
}
