package Apaxiaaaaaaaaaaaans;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String namet;
        char[] name = new char[251];
        int noc;
        namet = sc.next();
        noc=namet.length();
        for (int i = 0; i < noc; i++) {
            name[i] =namet.charAt(i);
        }
        for (int i=0;i<noc;i++)
        {
            if (name[i]==name[i+1])
            {
                for (int j=i;j<noc;j++)
                {
                    name[j]=name[j+1];
                }
                i--;
                noc--;
            }
        }
        for (int i=0;i<noc;i++)
            System.out.print(name[i]);
    }
}
