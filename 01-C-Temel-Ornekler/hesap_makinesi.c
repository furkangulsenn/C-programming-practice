#include <stdio.h>

int main() {
  
    int sayi1, sayi2, secim;
    float sonuc;

    printf("İki sayi gir: ");
    scanf("%d %d", &sayi1, &sayi2);

    printf("1-Toplama 2-Çıkarma 3-Çarpma 4-Bölme: ");
    scanf("%d", &secim);

    if (secim == 1) sonuc = sayi1 + sayi2;
    else if (secim == 2) sonuc = sayi1 - sayi2;
    else if (secim == 3) sonuc = sayi1 * sayi2;
    else if (secim == 4) sonuc = (float)sayi1 / sayi2;
    else {
      
        printf("Geçersiz seçim!\n");
      
        return 0;
    }

    printf("Sonuç = %.2f\n", sonuc);

  
    return 0;
}
