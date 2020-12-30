   1 #include <stdio.h>
   2 #define LIM 25
   3 #define FALSE 0
   4 #define TRUE 1
   5 
   6 int simetrica(int a[LIM][LIM], int n)
   7 {
   8     int i = 1, j, sim = TRUE;
   9     while (sim && i < n)
  10     {
  11         j = 0;
  12         while (sim && j < i)
  13         {
  14             sim = a[i][j] == a[j][i];
  15             j = j + 1;
  16         }
  17         i = i + 1;
  18     }
  19     return sim;
  20 }
  21 
  22 int main(void)
  23 {
  24     int i, j, n, mat[LIM][LIM];
  25     scanf("%d", &n);
  26     if (n < LIM)
  27     {
  28         for (i = 0; i < n; i = i + 1)
  29             for (j = 0; j < n; j = j + 1) scanf("%d", &mat[i][j]);
  30         putchar('\n');
  31         if (simetrica(mat, n)) printf("sim\n");
  32         else printf("nao\n");
  33     }
  34     else printf("Matriz excessivamente grande!\n");
  35     return 0;
  36 }