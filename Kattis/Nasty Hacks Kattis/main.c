/*Nasty Hacks
/problems/nastyhacks/file/statement/en/img-0001.png
You are the CEO of Nasty Hacks Inc., a company that creates small pieces of malicious software which teenagers may use to fool their friends. The company has just finished their first product and it is time to sell it. You want to make as much money as possible and consider advertising in order to increase sales. You get an analyst to predict the expected revenue, both with and without advertising. You now want to make a decision as to whether you should advertise or not, given the expected revenues.
Input
The input consists of n cases, and the first line consists of one positive integer giving n. The next n lines each contain 3 integers, r, e and c. The first, r, is the expected revenue if you do not advertise, the second, e, is the expected revenue if you do advertise, and the third, c, is the cost of advertising. You can assume that the input will follow these restrictions: 1≤n≤100, −106≤r,e≤106 and 0≤c≤106.

Output
Output one line for each test case: “advertise”, “do not advertise” or “does not matter”, indicating whether it is most profitable to advertise or not, or whether it does not make any difference.

Sample Input 1	Sample Output 1
3
0 100 70
100 130 30
-100 -70 40
advertise
does not matter
do not advertise
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,e,c,i,ok=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        ok=0;
        scanf("%d %d %d",&r,&e,&c);
        if (r>c)
            ok=0;
        if (e-c>r)
            ok=1;
        if (e-c==r)
            ok=2;
        if (ok==0)
            printf("do not advertise\n");
        if (ok==1)
            printf("advertise\n");
        if (ok==2)
            printf("does not matter\n");
    }
    return 0;
}
