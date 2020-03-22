package com.company;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
     int n,a,b,k=0;
     boolean ok=true;
     int[] vect=new int[365];
     Scanner sc=new Scanner(System.in);
     n=sc.nextInt();
     for (int i=0;i<n;i++){
         a=sc.nextInt();
         b=sc.nextInt();
         for (int j=a;j<=b;j++){
             ok=true;
            for (int l=0;l<k;l++) {
               if (vect[l]==j) {
                   ok=false;
               }
            }
            if (ok==true) {
                vect[k] = j;
                k++;
            }
         }
     }
        System.out.println(k);

    }
}
