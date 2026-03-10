#include <stdio.h>

int main() {
  
    int sayi, i = 0, kalan;
    int binary[32];

    printf("Bir ondalik sayi gir: ");
    scanf("%d", &sayi);

    int gecici = sayi;
  
    while (gecici > 0) {
      
        binary[i] = gecici % 2;
        gecici /= 2;
        i++;
    }

    printf("%d sayisinin ikili karsiligi: ", sayi);
  
    for (i = i-1; i >= 0; i--)
      printf("%d", binary[i]);
  
      printf("\n");

  
    return 0;
}
