package Symmetric.Order;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n=1,k=1;
        String[] name=new String[16];
        Scanner sc=new Scanner(System.in);
        while (n!=0) {
            n=sc.nextInt();
            for (int i=0;i<n;i++)
                name[i]=sc.next();
            if (n!=0) {
                System.out.println("SET " + k);
                k++;
            }
            for (int i=0;i<n;i+=2)
            {
                System.out.println(name[i]);
            }
           if (n%2!=0) {
               for (int i = n - 2; i >= 0; i -= 2)
                   System.out.println(name[i]);
           }
            else {
               for (int i = n - 1; i >= 0; i -= 2)
                   System.out.println(name[i]);
           }
        }
    }
}
