//https://sinhvientot.net/giai-thuat-tim-kiem-tuyen-tinh/
#include<stdio.h>
#define max 100
int linearsearch(int a[],  int x)
{
	int i;
	for (int i = 0; i < max;i++)
	{
	
		if (a[i] == x)
		{
				return 1;
		}
	}
	return 0;
} 

