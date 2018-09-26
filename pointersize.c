#include <stdio.h>
#include <stdlib.h>
int pointersize()
{
  int ** a;
  int (* b)[5] = (int(*)[5])malloc(3*5* sizeof(int));
  a = (int**) malloc(3 * sizeof(int*));
  int i;
  for( i = 0; i < 3; i++)
    a[i] = (int*) malloc(5 * sizeof(int));
  printf("The a has address : %p, a+1 : %p\n",a,a++);
  printf("The b has address : %p, b+1 : %p\n",b,b++);
  for(i = 0; i < 3; i++)
    free(a[i]);
  free(a);
  free(b);
}
