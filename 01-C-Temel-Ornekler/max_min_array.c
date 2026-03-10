#include <stdio.h>

int main() {
  
    int dizi[5] = {5, 9, 2, 8, 1};
    int i, maks, min;
    int boyut = 5;

    maks = min = dizi[0];
  
    for (i = 1; i < boyut; i++) {
      
        if (dizi[i] > maks) maks = dizi[i];
      
        if (dizi[i] < min) min = dizi[i];
    }

    printf("Maksimum = %d, Minimum = %d\n", maks, min);

  
    return 0;
}
