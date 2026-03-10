#include <stdio.h>
#include <stdlib.h>

struct Dugum {

    int veri;
    struct Dugum* sonraki;

};

int main() {
  
    struct Dugum *bas = NULL, *gecici, *yeni;
    int secim, sayi;

    do {
      
        printf("1-Ekle 2-Göster 0-Çıkış: ");
        scanf("%d", &secim);
      
        if (secim == 1) {
          
            printf("Eleman gir: ");
            scanf("%d", &sayi);
          
            yeni = (struct Dugum*)malloc(sizeof(struct Dugum));
            yeni->veri = sayi; yeni->sonraki = NULL;
          
            if (bas == NULL) bas = yeni;
              
            else {
                gecici = bas;
                while (gecici->sonraki != NULL) gecici = gecici->sonraki;
                gecici->sonraki = yeni;
            }
        } 
        else if (secim == 2) {
          
            gecici = bas;
          
            while (gecici != NULL) { printf("%d ", gecici->veri); gecici = gecici->sonraki; }
            printf("\n");
        }
    } 
      
      while (secim != 0);
  

    return 0;
}
