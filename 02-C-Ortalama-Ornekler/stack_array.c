#include <stdio.h>
#define MAX 5

int main() {
  
    int stack[MAX], ust = -1;
    int secim, eleman, i;

    do {
        printf("1-Ekle 2-Cikar 3-Goster 0-Cikis: ");
        scanf("%d", &secim);
        if (secim == 1) {
            if (ust >= MAX-1) printf("Stack dolu!\n");
            else {
                printf("Eleman gir: ");
                scanf("%d", &eleman);
                stack[++ust] = eleman;
            }
        } else if (secim == 2) {
            if (ust < 0) printf("Stack boş!\n");
            else printf("%d çıkarıldı\n", stack[ust--]);
        } else if (secim == 3) {
            if (ust < 0) printf("Stack boş!\n");
            else {
                printf("Stack: ");
                for (i = 0; i <= ust; i++) printf("%d ", stack[i]);
                printf("\n");
            }
        }
    } 
      
      while (secim != 0);

  
    return 0;
}
