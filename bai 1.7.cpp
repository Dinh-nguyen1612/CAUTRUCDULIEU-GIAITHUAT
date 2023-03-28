#include <stdio.h>
#include<conio.h>

struct Ngay
{
	int day;
	int month;
	int year;
};

typedef struct Ngay NGAY;
void nhapngay(NGAY &);
void xuatngay(NGAY);

void nhapngay(NGAY &ng)
{
	printf("\n nhap ngay:");
	scanf("%d",&ng.day);
	printf("\n nhay thang:");
	scanf("%d",&ng.month);
	printf("\n nhap nam:");
	scanf("%d",&ng.year);
}
void xuatngay(NGAY ng){
	printf("%d/%d/%d",ng.day,ng.month,ng.year);
	
}
int main()
{
	NGAY ng;
	nhapngay(ng);
	xuatngay(ng);
	getch();
	return 0;
}
