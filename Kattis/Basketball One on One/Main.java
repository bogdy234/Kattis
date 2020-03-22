package Basketball.One.on.One;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String game;
        char player,points;
        int scoreA = 0,scoreB=0;
        game=sc.next();
        for (int i=0;i<game.length();i+=2){

            player=game.charAt(i);
            points=game.charAt(i+1);
            if (player=='A')
            {
                scoreA+= Integer.parseInt(String.valueOf(points));
            }
            else if (player=='B')
            {
                scoreB+=Integer.parseInt(String.valueOf(points));
            }
            if (scoreA>=11 && scoreB<10)
            {
                System.out.println("A");
                break;
            }
            if (scoreB>=11 && scoreA<10)
            {
                System.out.println("B");
                break;
            }
            if (scoreA>=10 && scoreB>=10)
            {
                if (scoreA-scoreB>=2) {
                    System.out.println("A");
                    break;
                }
                if (scoreB-scoreA>=2){
                    System.out.println("B");
                    break;
                }
            }
        }
    }
}
