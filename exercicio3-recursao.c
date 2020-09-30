#include <stdio.h>
// Encontre o máximo divisor comum - mdc (p, q): entre p e q;
// Ex.: mdc (4032, 1272) = 24
int mdc(int a, int b){
  int r = -1;
  if(a>b){
    r = a%b;
    if(r==0)
      return b;
    else
      return mdc(b, r);
  }
  else{
    r = b%a;
    if(r==0)
      return a;
    else
      return mdc(a, r); 

  }
}
int main(void) {
  int n1, n2;
  printf("Digite os numeros separados por espaço\n");
  scanf("%i %i", &n1, &n2);
  printf("%d\n", mdc(n1, n2));
  return 0;
}
