package T9_Spelling;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int N, contor = 1;
        int[] a = new int[100];
        int[] x = new int[100];
        char[] litere = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        int f = 0;
        String s;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        sc.nextLine();
        for (int k = 2; k <= 6; k++) {
            for (int l = 1; l <= 3; l++) {
                a[f] = k;
                x[f] = l;
                f++;
            }
        }
        a[f+1]=a[f+2]=a[f+3]=a[f]=7;
        x[f]=1;x[f+1]=2;x[f+2]=3;x[f+3]=4;
        f=f+4;
        a[f+1]=a[f+2]=a[f]=8;
        x[f]=1;x[f+1]=2;x[f+2]=3;
        f=f+3;
        a[f+1]=a[f+2]=a[f+3]=a[f]=9;
        x[f]=1;x[f+1]=2;x[f+2]=3;x[f+3]=4;

        for (int i = 0; i < N; i++) {
            System.out.print("case #" + contor+": ");
            s = sc.nextLine();
            for (int j = 0; j < s.length(); j++) {
                if (j>0)
                {
                    if (s.charAt(j-1)==' ' && s.charAt(j)==' ')
                        System.out.print(" ");
                }
                if (s.charAt(j)==' ')
                    System.out.print("0");

                for (int m = 0; m < litere.length; m++) {
                    if (s.charAt(j) == litere[m])
                    {
                       if (j>=1) {
                           for (int eps = 0; eps < litere.length; eps++)
                               if (s.charAt(j - 1) == litere[eps]) {
                                   if (a[eps] == a[m])
                                       System.out.print(" ");
                                   break;
                               }
                       }
                        printNum(a[m],x[m]);
                        continue;
                    }
                }
            }
            System.out.println();
            contor++;
        }
    }

    static void printNum(int a, int x) {
        for (int i = 0; i < x; i++)
            System.out.print(a);
    }
}
