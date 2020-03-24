package Poker.Hand;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] hand=new String[6];
        Scanner sc=new Scanner(System.in);
        //A23456789TJQK
        char[] rank=new char[14];
        for (int i=0;i<5;i++)
        {
            hand[i]=sc.next();
        }
        for (int i=0;i<13;i++)
            rank[i]=0;
        for (int i=0;i<5;i++)
        {
            switch (hand[i].charAt(0)){
                case 'A':
                    rank[0]++;
                    break;
                case '2':
                    rank[1]++;
                    break;
                case '3':
                    rank[2]++;
                    break;
                case '4':
                    rank[3]++;
                    break;
                case '5':
                    rank[4]++;
                    break;
                case '6':
                    rank[5]++;
                    break;
                case '7':
                    rank[6]++;
                    break;
                case '8':
                    rank[7]++;
                    break;
                case '9':
                    rank[8]++;
                    break;
                case 'T':
                    rank[9]++;
                    break;
                case 'J':
                    rank[10]++;
                    break;
                case 'Q':
                    rank[11]++;
                    break;
                case 'K':
                    rank[12]++;
                    break;

            }
        }
        int max=0;
        for (int i=0;i<13;i++)
        {
            if (rank[i]>max)
                max=rank[i];
        }
        System.out.println(max);
    }
}
