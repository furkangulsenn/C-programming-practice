#include <stdio.h>

int ebob(int a, int b) {
  
    if (b == 0) 
      return a;
  
    return ebob(b, a % b);
}

int main() {
  
    int sayi1, sayi2;
  
    printf("İki sayı gir: ");
    scanf("%d %d", &sayi1, &sayi2);

    int ekok = (sayi1 * sayi2) / ebob(sayi1, sayi2);
  
    printf("EKOK = %d\n", ekok);

  
    return 0;
}
