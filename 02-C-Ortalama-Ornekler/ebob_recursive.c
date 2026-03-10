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

    printf("EBOB = %d\n", ebob(sayi1, sayi2));

  
    return 0;
}
