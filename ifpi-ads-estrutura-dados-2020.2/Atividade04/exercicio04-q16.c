//Matriz quadratica simetrica
#include <stdio.h>
#define LIM 25
#define FALSE 0
#define TRUE 1
 
int simetrica(int a[LIM][LIM], int n) {  
  int i = 1, j, sim = TRUE;
  while (sim && i < n) {
    j = 0;
    while (sim && j < i) {
      sim = a[i][j] == a[j][i];
      j ++;
    }
    i ++;
  }
  return sim;
}
 
int main(void)
{
  int n, mat[LIM][LIM];

  printf("Informe um numero: ");
  scanf("%d", &n);

  if (n < LIM) {
    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        printf("Informe os elementos da matriz [%d]: ", j);
        scanf("%d", &mat[i][j]);
      }
    }
    putchar('\n');
    if (simetrica(mat, n)) {
      printf("Matriz Simetrica\n");
    } else {
      printf("Matriz Assimetrica\n");
    }
  } else {
    printf("Matriz muito grande\n");
  }
  return 0;
}