#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char acelasiSir(char a[],char b[])
{
    int i;
    if (strlen(a)==strlen(b))
    {
        for (i=0; i<strlen(a); i++)
            if (a[i]!=b[i])
                return 0;
        return 1;
    }
    return 0;
}

int main()
{
    int t,n,i,j,k,m=0,l,e,nr=0;
    char b[100][20],a[20];
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        m=0;
        nr=0;
        scanf("%d",&n);
        for (j=0; j<n; j++)
        {
            scanf("%s",a);
            /*for (k=0;k<strlen(a);k++)
              b[m][k]=a[k];*/
            strcpy(b[m],a);
            m++;
        }
        for (l=0; l<n; l++)
        {
            if(b[l][0]!='\0')
            {
                for (e=l+1; e<n; e++)
                    if (strcmp(b[l],b[e])==0)
                        b[e][0]='\0';
                nr++;
            }
        }
            printf("%d\n",nr);
    }
    return 0;
}
