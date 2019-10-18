#include<stdio.h>
int main()
{
	int time1, time2;
	int h = 0, m = 0;
	scanf("%d %d", &time1, &time2);
	m = time2 % 100 - time1 % 100;
	if (m < 0)
	{
		m += 60;
		h--;
	}
	h += time2 / 100 - time1 / 100;
	printf("%02d:%02d", h, m);
	return 0;
}