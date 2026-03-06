#include <stdio.h>

int asalMi(int sayi) {
  
    int i;
  
    if (sayi < 2) return 0;
  
      for (i = 2; i*i <= sayi; i++)
          if (sayi % i == 0) return 0;
  
    return 1;
}

int main() {
  
    int bas, son, i;
  
    printf("Başlangıç ve bitiş sayısını gir: ");
    scanf("%d %d", &bas, &son);

    printf("%d-%d arasındaki asal sayılar: ", bas, son);
  
    for (i = bas; i <= son; i++)
      
        if (asalMi(i)) printf("%d ", i);
  
    printf("\n");

  
    return 0;
}
