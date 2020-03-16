#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,fact,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        fact=1;
        scanf("%d",&x);
        for (j=x;j>1;j--)
            fact=fact*j;
        printf("%d\n",fact%10);
    }
    return 0;
}
