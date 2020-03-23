package Simon.Says;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;
        String command;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        sc.nextLine();
        for (int nrcaz=0;nrcaz<n;nrcaz++)
        {
            command=sc.nextLine();
            if (command.startsWith("Simon says"))
            {
                System.out.println(command.substring(10));
            }
        }
    }
}
