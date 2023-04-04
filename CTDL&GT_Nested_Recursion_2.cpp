//https://freetuts.net/de-quy-long-nested-recursion-2959.html
#include <iostream>
using namespace std;
 
int A(int m, int n){
  if(m == 0)
    return n + 1;
  else if(n == 0) 
    return A(m - 1, 1);
  else // n?u m > 0 và n > 0 thì return d? quy l?ng A(m-1, A(m, n-1))
    return A(m-1, A(m, n-1));
}
int main() {
  int kq = A(2,1); 
  cout<<"\nKet qua: "<<kq;
}
