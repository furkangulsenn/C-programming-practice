#include <stdio.h>
#include <math.h>

// 1 ve 0 lardan oluşan sayıyı girdikten sonra klavyeden hernagi bi harfi yada kelimeyi tuşlayıp enterlanması lazım.

int main() {
  
    int i = 0, ondalik = 0, sayi;
    int binary[32];
  
    printf("İkili sayi gir (en fazla 32 bit): ");
  
    while (scanf("%1d", &binary[i]) == 1) i++;

    int basamak;
  
    for (basamak = 0; basamak < i; basamak++)
        ondalik += binary[i-1-basamak] * pow(2, basamak);

    printf("Ondalik karsiligi: %d\n", ondalik);

  
    return 0;
}
