//https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan/
#include <stdio.h>
 
int search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)

      return i;
  
  return -1;
}
 

