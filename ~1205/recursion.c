#include <stdio.h>

long rec(int n){
  if(n==0) return 1;
  else return rec(n-1)*n;
}

int main(void){
  int n = 0;
  scanf("%d\n", &n);
  printf("%ld\n",rec(n));
  return 0;
}
