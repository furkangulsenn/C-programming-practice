#include <stdio.h>
#include <stdlib.h>

struct Dugum {

    int veri;
    struct Dugum* sonraki;
};

int main() {
  
    struct Dugum *bas = NULL, *gecici, *yeni, *onceki = NULL, *sonraki = NULL;
    int secim, sayi;

    do {
      
        printf("1-Ekle 2-Göster 3-Ters 0-Çıkış: ");
        scanf("%d", &secim);
      
        if (secim == 1) {
          
            printf("Eleman gir: ");
            scanf("%d", &sayi);
            yeni = (struct Dugum*)malloc(sizeof(struct Dugum));
            yeni->veri = sayi; yeni->sonraki = bas;
            bas = yeni;
        } 
          
        else if (secim == 2) {
          
            gecici = bas;
          
            while (gecici != NULL) { printf("%d ", gecici->veri); gecici = gecici->sonraki; }
            printf("\n");
          
        } 
        
        else if (secim == 3) {
          
            onceki = NULL; gecici = bas;
          
            while (gecici != NULL) {
              
                sonraki = gecici->sonraki;
                gecici->sonraki = onceki;
                onceki = gecici;
                gecici = sonraki;
            }
          
            bas = onceki;
        }
    }
      
      while (secim != 0);
  

    return 0;
}
