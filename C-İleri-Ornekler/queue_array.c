#include <stdio.h>
#define MAX 5

// FIFO mantığı vardır (First In First Out)

int main() {
  
    int queue[MAX], on = 0, arka = -1, i, secim, eleman;
  
    do {
        printf("1-Ekle 2-Çıkar 3-Göster 0-Çıkış: ");
        scanf("%d", &secim);
        if (secim == 1) {
            if (arka >= MAX-1) printf("Queue dolu!\n");
            else {
                printf("Eleman gir: ");
                scanf("%d", &eleman);
                queue[++arka] = eleman;
            }
        } else if (secim == 2) {
            if (on > arka) printf("Queue boş!\n");
            else printf("%d çıkarıldı\n", queue[on++]);
        } else if (secim == 3) {
            if (on > arka) printf("Queue boş!\n");
            else {
                printf("Queue: ");
                for (i = on; i <= arka; i++) printf("%d ", queue[i]);
                printf("\n");
            }
        }
    } 
    
      while (secim != 0);

  
    return 0;
}
