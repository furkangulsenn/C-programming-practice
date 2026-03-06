#include <stdio.h>

int main() {
  
    int dizi[5] = {10, 20, 30, 40, 50};
    int i, toplam = 0, boyut = 5;
  
    float ortalama;

    for (i = 0; i < boyut; i++) toplam += dizi[i];
  
      ortalama = (float)toplam / boyut;

    printf("Dizi ortalaması = %.2f\n", ortalama);

  
    return 0;
}
