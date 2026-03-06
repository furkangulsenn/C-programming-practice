#include <stdio.h>

int main() {
  
    int dizi[5] = {5, 1, 4, 2, 8};
    int i, j, gecici;
    int boyut = 5;

    for (i = 0; i < boyut-1; i++)
        for (j = 0; j < boyut-i-1; j++)
            if (dizi[j] > dizi[j+1]) {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }

    for (i = 0; i < boyut; i++) printf("%d ", dizi[i]);
      printf("\n");
  
    return 0;
}
