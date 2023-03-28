#include<stdio.h>
#include<conio.h>

struct SOTIETKIEM
{
	char maso[5];
	char loaitietkiem[10];
	char hotenkhachhang[30];
	int chungminhnhandan;
	int ngaymoso;
	
	 float sotiengui;
};
typedef struct SOTIETKIEM sotietkiem;
void nhap(sotietkiem &stk)
{
	fflush(stdin);
	printf("\n nhap ma so:");

	gets(stk.maso);
	printf("\n nhap loai tiet kiem:");
	gets(stk.loaitietkiem);
	printf("\n nhap ho ten khach hang:");
	gets(stk.hotenkhachhang);
	printf("\n nhap chung minh nhan dan:");
	scanf("%d",&stk.chungminhnhandan);
	printf("\n ngay mo so:");
	scanf("%d",&stk.ngaymoso);
	printf("\n nhap so tien gui:");
	scanf("%f",&stk.sotiengui);
}
void xuat(SOTIETKIEM stk)
{
	printf("\n ma so:%s",stk.maso);
	printf("\n loai tiet kiem:%s",stk.loaitietkiem);
	printf("\n ho ten khach hang:%s",stk.hotenkhachhang);
	printf("\n chung minh nhan dan:%d",stk.chungminhnhandan);
	printf("\n ngay mo so:%d",stk.ngaymoso);
	printf("\n so tien gui:%f",stk.sotiengui);
	
}
int main()
{
	SOTIETKIEM stk1;
	nhap(stk1);
	xuat(stk1);
	return 0;
}
