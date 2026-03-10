#include <stdio.h>

int main() {
  
    int sayi, i, sonuc = 1;
  
    printf("Bir sayi gir: ");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++) sonuc *= i;

    printf("%d! = %d\n", sayi, sonuc);

  
    return 0;
}
