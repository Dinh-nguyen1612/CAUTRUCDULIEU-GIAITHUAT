#include<stdio.h>
#include<conio.h>
#include<math.h>
struct toado
{
	int x;
	int y;
};

typedef struct toado td;

 void nhaptoado(toado &a)
 {
 	printf("nhap tung do:");
 	scanf("%d",&a.x);
 	printf("nhap hoanh do:");
 	scanf("%d",&a.y);
 }
 void xuattoado(toado &a)
 {
 	printf("toa do nhap la:(%d,%d)",a.x,a.y);
 	
 };
 
 int main()
 {
 	toado td;
 	nhaptoado(td);
 	xuattoado(td);
 	getch();
 	return 0;
 }
