package Judging.Moose;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int left,right;
        Scanner sc=new Scanner(System.in);
        left=sc.nextInt();
        right=sc.nextInt();
        int sum;
        sum=left+right;
        if (sum==0)
            System.out.println("Not a moose");
        else if (left==right)
            System.out.println("Even "+sum);
        else
            System.out.println("Odd "+2*maxim(left,right));
    }
    static int maxim(int a, int b)
    {
        if (a>b)
            return a;
        else return b;
    }
}
