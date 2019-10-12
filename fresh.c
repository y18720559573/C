#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int i, n, sum = 0;
 
        /*if(scanf("%d", &n) != EOF)
            {for(i = 1; i <= n; i++)
                sum += i;
            printf("%d\n", sum);}*/
 
    while(scanf("%d", &n) != EOF)
    {
        sum = 0;
        for(i = 1; i <= n; i++)
            sum += i;
        printf("%d\n\n", sum);
    }
    return 0;
}