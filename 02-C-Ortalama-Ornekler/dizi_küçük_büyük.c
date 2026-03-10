#include <stdio.h>

int main() {
  
    int dizi[6] = {5, 2, 9, 1, 6, 3};
    int i, j, gecici;

    for (i = 0; i < 6-1; i++)
        for (j = i+1; j < 6; j++)
            if (dizi[i] < dizi[j]) {
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }

    printf("Büyükten küçüğe sıralama: ");
  
    for (i = 0; i < 6; i++) 
      printf("%d ", dizi[i]);
  
    printf("\n");

  
    return 0;
}
