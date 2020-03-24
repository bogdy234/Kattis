package Fifty.Shades.of.Pink;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int N,nr=0;
        String s;
        Scanner sc=new Scanner(System.in);
        N=sc.nextInt();
        for (int con=0;con<N;con++)
        {
            s=sc.next();
           if (s.length()==4) {
               if (s.toLowerCase().equals("pink") || s.toLowerCase().equals("rose"))
                   nr++;
           }
            else {
                for (int i = 0; i < s.length()-3; i++)
                    if (s.substring(i, i + 4).toLowerCase().equals("pink") || s.substring(i, i + 4).toLowerCase().equals("rose")) {
                        nr++;
                        break;
                    }
            }
        }
        if (nr>0)
            System.out.println(nr);
        else System.out.println("I must watch Star Wars with my daughter");
    }
}
