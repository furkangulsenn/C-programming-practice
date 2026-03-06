#include <stdio.h>

int main() {
  
    int dizi[5] = {1, 3, 5, 7, 9};
    int i, aranan, bas = 0, son = 4, orta;
    int bulundu = 0;

    printf("Aranan sayıyı gir: ");
    scanf("%d", &aranan);

    while (bas <= son) {
        orta = (bas + son)/2;
      
        if (dizi[orta] == aranan) { bulundu = 1; break; }
          
        else if (dizi[orta] < aranan) bas = orta + 1;
          
        else son = orta - 1;
    }

  
    if (bulundu) printf("%d dizide bulundu.\n", aranan);
      
    else printf("%d dizide yok.\n", aranan);

  
    return 0;
}
