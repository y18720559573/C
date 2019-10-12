#include<stdio.h>
int main()
{
      double r;
	  double a = 3.1415927;
      while(~scanf("%1f", &r))
      {
            printf("%.31f\n",(4.0/3.0)*a*r);
      }
      return 0;
}