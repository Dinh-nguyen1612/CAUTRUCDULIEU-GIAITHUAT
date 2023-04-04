//https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan/
#include <stdio.h>
 int binarysearch(int arr[], int n, int x) 
{
  int r = n - 1; 
  int l = 0; 
  while (r >= l) {
    int mid = l + (r - l) / 2; 
	if (arr[mid] == x)
    return mid;
    if (arr[mid] > x)
    r = mid - 1;
    if (arr[mid] < x)
    l = mid + 1;
  }
   return -1;
}
 
int main(void) {
  int arr[] = {2,3,4,5,6,10};
   
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 6;
  int result = binarysearch(arr, n, x);
  if (result != -1)
    printf("%d xuat hien tai chi so %d", x, result);
  else
    printf("%d khong xuat hien", x);
  return 0;
}
