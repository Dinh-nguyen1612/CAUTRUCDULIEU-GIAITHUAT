//https://freetuts.net/thuat-toan-sap-xep-chon-selection-sort-2931.html
#include <stdio.h>
void hoanvi(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
  void selectionsort(int arr[], int n)
{
    int i, j, min;
    
    for (i = 0; i < n-1; i++)
    {
   
    min = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min])
        min = j;
	hoanvi(arr[min], arr[i]);
    }
}
  
void xuat(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
	{
        printf("%d", arr[i]);
       
    }
}
int main()
{
	 int arr[] = {3,4,6,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    printf("mang sau khi sap xep: \n");
    xuat(arr, n);
    return 0;
}
  
