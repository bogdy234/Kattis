#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int absolut(long long int x)
{
    if (x<0)
        x=-x;
    return x;
}

int main()
{
    long long int x=0,y;
    char z;
      while(scanf("%lli",&x)&& scanf("%lli",&y))
        printf("%lli\n",absolut(x-y));
    return 0;
}
