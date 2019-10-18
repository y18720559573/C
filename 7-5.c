#include<stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d %d",&a,&b);
    c = (double)(a * b)/(double)10;
    printf("%.2f",c);
    return 0;
}