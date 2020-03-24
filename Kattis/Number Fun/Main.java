package Number.Fun;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int N,a,b,c;
        Scanner sc=new Scanner(System.in);
        N=sc.nextInt();
        for (int con=0;con<N;con++)
        {
            a=sc.nextInt();
            b=sc.nextInt();
            c=sc.nextInt();
            if (a+b==c || a-b==c || a*b==c || (double)a/b==c || b-a==c || b*a==c || (double)b/a==c)
                System.out.println("Possible");
            else System.out.println("Impossible");
        }
    }
}
