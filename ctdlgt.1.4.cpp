#include<stdio.h>
struct Oxyz
{
	int x;
	int y;
	int z;
};

typedef struct Oxyz OXYZ;
void nhap(OXYZ& oxyz)
{
	printf("nhap hoanh do:");
	scanf("%d",&oxyz.x);
	printf("nhap tung do:");
	scanf("%d",&oxyz.y);
	printf("nhap cao do:");
	scanf("%d",&oxyz.z);
}
void xuat(OXYZ oxyz)
{
	printf("hoanh do:%d\n tungdo:%d\n caodo:%d ",oxyz.x,oxyz.y,oxyz.z);
	
}
int main()
{
	OXYZ oxyz;
	nhap(oxyz);
	xuat(oxyz);
	return 0;
}
