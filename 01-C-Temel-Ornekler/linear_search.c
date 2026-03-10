#include <stdio.h>

int main() {
  
    int dizi[5] = {2, 4, 0, 1, 9};
    int i, aranan;
    int boyut = 5;
    int bulundu = 0;

    printf("Aranan sayıyı gir: ");
    scanf("%d", &aranan);

    for (i = 0; i < boyut; i++)
        if (dizi[i] == aranan) { bulundu = 1; break; }
  

    if (bulundu) printf("%d dizide bulundu.\n", aranan);
      
    else printf("%d dizide yok.\n", aranan);

  
    return 0;
}
