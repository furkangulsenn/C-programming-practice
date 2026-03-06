#include <stdio.h>

int main() {
  
    int dizi[5] = {29, 10, 14, 37, 13};
    int i, j, minIndeks, gecici;
    int boyut = 5;

    for (i = 0; i < boyut-1; i++) {
        minIndeks = i;
      
        for (j = i+1; j < boyut; j++)
            if (dizi[j] < dizi[minIndeks]) minIndeks = j;
        gecici = dizi[i];
        dizi[i] = dizi[minIndeks];
        dizi[minIndeks] = gecici;
    }

    for (i = 0; i < boyut; i++) printf("%d ", dizi[i]);
      printf("\n");

  
    return 0;
}
