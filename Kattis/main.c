#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    int digit;
    scanf("%f",&x);
    y=x*1000*5280/4854;
    digit=((int)(y*10))% ((int)y);
    if (digit>=5)
        y=y+1;
    printf("%d",(int)y);
    return 0;
}
