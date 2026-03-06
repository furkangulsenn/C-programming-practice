#include <stdio.h>

int main() {
  
    int sayi1, sayi2, ebob, ekok, i;

    printf("İki sayi gir: ");
    scanf("%d %d", &sayi1, &sayi2);

    for (i = 1; i <= sayi1 && i <= sayi2; i++)
      
        if (sayi1 % i == 0 && sayi2 % i == 0) 
          ebob = i;

    ekok = (sayi1 * sayi2) / ebob;

    printf("EBOB = %d, EKOK = %d\n", ebob, ekok);

  
    return 0;
}
