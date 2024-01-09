#include <stdio.h>

int main()
{

 char v;

 printf("Lietotaj ludzu ievadiet pozitivu naturalu skaitlilidz 255: ");
 scanf("%hhd", &v);

 printf("Skaitlis binaraja veida: ");

 printf("%hhd", (v >> 7) &1);
 printf("%hhd", (v >> 6) &1);
 printf("%hhd", (v >> 5) &1);
 printf("%hhd", (v >> 4) &1);
 printf("%hhd", (v >> 3) &1);
 printf("%hhd", (v >> 2) &1);
 printf("%hhd", (v >> 1) &1);
 printf("%hhd", (v >> 0) &1);

 printf("\n");
 return 0;

}
