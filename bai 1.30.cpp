#include<stdio.h>
#include<conio.h>

struct NHANVIEN
{
	char manhanvien[5];
	char tennhanvien[30];
	float luongnhanvien;
};
typedef struct NHANVIEN nhanvien;
void nhapnhanvien(nhanvien &);
void xuatnhanvien(nhanvien);

void nhapnhanvien(nhanvien &nv)
{
	fflush(stdin);
	printf("\n nhap ma nhan vien:");

	gets(nv.manhanvien);
	printf("\n nhap ten nhan vien:");
	gets(nv.tennhanvien);
	
	printf("\n nhap luong nhan vien:");
	scanf("%f",&nv.luongnhanvien);
	
	
	
}
void xuatnhanvien(nhanvien nv)
{
	printf("ma nhan vien:%s \n",nv.manhanvien);
	printf("ten nhan vien:%s \n",nv.tennhanvien);
	printf("luong nhan vien:%f \n",nv.luongnhanvien);
}
int main()
{
	nhanvien nv1;
	nhapnhanvien(nv1);
	xuatnhanvien(nv1);
	getch();
	return 0;
}
