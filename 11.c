#include<stdio.h>
int main(){
    int x,y;
    int a,b;
    while(~scanf("%d %d",&x,&y)){
        a = (x+y)/2;
        b = (x-y)/2;
        printf("%d\n",a*b);
    }
    return 0;
}