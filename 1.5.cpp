#include<stdio.h>

struct donthuc
{
	int n;
	float a;
};

typedef struct donthuc dt;

void nhap(donthuc &dt)
{
	printf(" nhap a:\n");
	scanf("%d",&dt.a);
	printf("nhap n:\n");
	scanf("%d",&dt.n);
}

void xuat(donthuc dt)
{
	printf("%d/%d",dt.a,dt.n);
}
int main()
{
	donthuc dt;
	nhap(dt);
	xuat(dt);
	return 0;
}
