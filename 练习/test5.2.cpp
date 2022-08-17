#include <stdio.h>
#define SQUARES  64
int main (void)
{
	const double CROP = 2E16;
	double current,total;
	int count = 1;
	printf("格子数      增加量        总量          占世界比\n");
	total = current = 1;
	printf("%4d   %12.2e   %12.2e   %12.2e\n",count,current,total,total/CROP);
	while (count < SQUARES)
	{
		count = count + 1;
		current = 2 * current;
		total = total + current;
		printf("%4d   %12.2e   %12.2e   %12.2e\n",count,current,total,total/CROP); 
	}
	printf("结束了啦"); 
	return 0;
}
