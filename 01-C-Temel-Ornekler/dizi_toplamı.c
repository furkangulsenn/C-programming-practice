#include <stdio.h>

int main() {
  
    int dizi[5] = {1, 2, 3, 4, 5};
    int i, toplam = 0;
    int boyut = 5;

    for (i = 0; i < boyut; i++) toplam += dizi[i];

    printf("Toplam = %d\n", toplam);

  
    return 0;
}
