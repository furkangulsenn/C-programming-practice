#include <stdio.h>

int main() {
  
    int dizi[5] = {12, 11, 13, 5, 6};
    int i, j, anahtar;
    int boyut = 5;

    for (i = 1; i < boyut; i++) {
        anahtar = dizi[i];
        j = i - 1;
        while (j >= 0 && dizi[j] > anahtar) {
            dizi[j + 1] = dizi[j];
            j--;
        }
      
        dizi[j + 1] = anahtar;
    }

    for (i = 0; i < boyut; i++) printf("%d ", dizi[i]);
      printf("\n");

  
    return 0;
}
